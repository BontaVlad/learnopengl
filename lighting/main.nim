import sdl2
import glm
import opengl

import shader
import camera


type SDLException = object of Exception


var
  run = true
  screenWidth : cint = 800
  screenHeight : cint = 600
  cam = newCamera(vec3(0.0f, 0.0f, 3.0f))
  deltaTime = 0.0f
  lastFrame = 0.0f


# Initialize OpenGL
loadExtensions()
template sdlFailIf(cond: typed, reason: string) =
  if cond: raise SDLException.newException(
    reason & ", SDL error: " & $getError())


template ClearColor*(r:float32, g:float32, b:float32, a:float32) =
  glClearColor(r.GLfloat, g.GLfloat, b.GLfloat, a.GLfloat)

proc glCheckError*(ignoreError = false) =
  let error = glGetError()
  var msg: seq[string] = @[]
  case error:
    of GL_NO_ERROR: discard
    of GL_INVALID_ENUM: msg.add("GL_INVALID_ENUM")
    of GL_INVALID_VALUE: msg.add("GL_INVALID_VALUE")
    of GL_INVALID_OPERATION: msg.add("GL_INVALID_OPERATION")
    of GL_STACK_OVERFLOW: msg.add("GL_STACK_OVERFLOW")
    of GL_STACK_UNDERFLOW: msg.add("GL_STACK_UNDERFLOW")
    of GL_OUT_OF_MEMORY: msg.add("GL_OUT_OF_MEMORY")
    else: echo repr(error)
  for m in msg:
    echo "Error: ", m
    if not ignoreError:
      quit "glCheckError occurred"


proc handleInput(deltaTime: float) =
  var evt = defaultEvent
  let keyState = getKeyboardState()

  while pollEvent(evt):
    case evt.kind
    of QuitEvent:
      run = false
    of WindowEvent:
      var windowEvent = cast[WindowEventPtr](addr(evt))
      if windowEvent.event == WindowEvent_Resized:
        screenWidth = windowEvent.data1
        screenHeight = windowEvent.data2
        glViewport(0, 0, screenWidth, screenHeight)   # Set the viewport to cover the new window
    of MouseWheel:
      var wheelEvent = cast[MouseWheelEventPtr](addr(evt))
      cam.processMouseScroll(wheelEvent.y.float32)

    of MouseMotion:
      var motionEvent = cast[MouseMotionEventPtr](addr(evt))
      cam.processMouseMovement(motionEvent.xrel.float32, motionEvent.yrel.float32)
    else:
      discard

  if keyState[SDL_SCANCODE_UP.uint8] != 0:
    cam.processKeyboard(FORWARD, deltaTime)
  if keyState[SDL_SCANCODE_DOWN.uint8] != 0:
    cam.processKeyboard(BACKWARD, deltaTime)
  if keyState[SDL_SCANCODE_LEFT.uint8] != 0:
    cam.processKeyboard(LEFT, deltaTime)
  if keyState[SDL_SCANCODE_RIGHT.uint8] != 0:
    cam.processKeyboard(RIGHT, deltaTime)
  if keyState[SDL_SCANCODE_ESCAPE.uint8] != 0:
    discard


proc main =
  sdlFailIf(not sdl2.init(INIT_EVERYTHING)):
    "SDL2 initialization failed"

    # defer blocks get called at the end of the procedure, even if an
    # exception has been thrown
  defer: sdl2.quit()


  discard glSetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  discard glSetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
  discard glSetAttribute(SDL_GL_ACCELERATED_VISUAL, 1);
  discard glSetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

  sdlFailIf(not setHint("SDL_RENDER_SCALE_QUALITY", "2")):
    "Linear texture filtering could not be enabled"

  let window = createWindow(title = "Our own 2D platformer",
                          x = SDL_WINDOWPOS_CENTERED, y = SDL_WINDOWPOS_CENTERED,
                              w = screenWidth, h = screenHeight, SDL_WINDOW_OPENGL or SDL_WINDOW_RESIZABLE)
  sdlFailIf window.isNil: "Window could not be created"

  discard setRelativeMouseMode(true.Bool32)
  discard window.glCreateContext()
  defer: window.destroy()


  glEnable(GL_DEPTH_TEST)                           # Enable depth testing for z-culling

  let
    vertices : seq[float32]  =
        @[
          # positions                 # texture coords
          -0.5'f32, -0.5'f32, -0.5'f32,
          0.5'f32, -0.5'f32, -0.5'f32,
          0.5'f32,  0.5'f32, -0.5'f32,
          0.5'f32,  0.5'f32, -0.5'f32,
        -0.5'f32,  0.5'f32, -0.5'f32,
        -0.5'f32, -0.5'f32, -0.5'f32,

        -0.5'f32, -0.5'f32,  0.5'f32,
          0.5'f32, -0.5'f32,  0.5'f32,
          0.5'f32,  0.5'f32,  0.5'f32,
          0.5'f32,  0.5'f32,  0.5'f32,
        -0.5'f32,  0.5'f32,  0.5'f32,
        -0.5'f32, -0.5'f32,  0.5'f32,

        -0.5'f32,  0.5'f32,  0.5'f32,
        -0.5'f32,  0.5'f32, -0.5'f32,
        -0.5'f32, -0.5'f32, -0.5'f32,
        -0.5'f32, -0.5'f32, -0.5'f32,
        -0.5'f32, -0.5'f32,  0.5'f32,
        -0.5'f32,  0.5'f32,  0.5'f32,

          0.5'f32,  0.5'f32,  0.5'f32,
          0.5'f32,  0.5'f32, -0.5'f32,
          0.5'f32, -0.5'f32, -0.5'f32,
          0.5'f32, -0.5'f32, -0.5'f32,
          0.5'f32, -0.5'f32,  0.5'f32,
          0.5'f32,  0.5'f32,  0.5'f32,

        -0.5'f32, -0.5'f32, -0.5'f32,
          0.5'f32, -0.5'f32, -0.5'f32,
          0.5'f32, -0.5'f32,  0.5'f32,
          0.5'f32, -0.5'f32,  0.5'f32,
        -0.5'f32, -0.5'f32,  0.5'f32,
        -0.5'f32, -0.5'f32, -0.5'f32,

        -0.5'f32,  0.5'f32, -0.5'f32,
          0.5'f32,  0.5'f32, -0.5'f32,
          0.5'f32,  0.5'f32,  0.5'f32,
          0.5'f32,  0.5'f32,  0.5'f32,
        -0.5'f32,  0.5'f32,  0.5'f32,
      -0.5'f32, 0.5'f32, -0.5'f32]

  var
    VBO: GLuint
    cubeVAO: GLuint
  glGenVertexArrays(1, addr cubeVAO)
  glGenBuffers(1, addr VBO)

  glBindBuffer(GL_ARRAY_BUFFER, VBO)
  glBufferData(GL_ARRAY_BUFFER, sizeof(cGL_FLOAT) * vertices.len, vertices[0].unsafe_addr, GL_STATIC_DRAW)

  glBindVertexArray(cubeVAO)

  glVertexAttribPointer(0.GLuint, 3.GLint, cGL_FLOAT, false, (3 * sizeof(cGL_FLOAT)).GLsizei, cast[pointer](0))
  glEnableVertexAttribArray(0)


  var lightVAO: GLuint
  glGenVertexArrays(1, addr lightVAO)
  glBindVertexArray(lightVAO)
  glBindBuffer(GL_ARRAY_BUFFER, VBO)

  glVertexAttribPointer(0.GLuint, 3.GLint, cGL_FLOAT, false, (3 * sizeof(cGL_FLOAT)).GLsizei, cast[pointer](0))
  glEnableVertexAttribArray(0)

  var
    lightingShader = newShader("colors.vert", "colors.frag")
    lampShader = newShader("lamp.vert", "lamp.frag")
    lampColor = vec3f(1.0f)
    lampPos = vec3f(1.2f, 1.0f, 2.0f)

  while run:
    var
      currentFrame = getTicks().float
      projection = perspective[float32](radians(cam.zoom), screenWidth/screenHeight, 0.1f, 100.0f)
      view = cam.viewMatrix

    deltaTime = currentFrame - lastFrame
    lastFrame = currentFrame

    handleInput(deltaTime)
    ClearColor(0.1,0.1,0.1,1.0)
    glClear(GL_COLOR_BUFFER_BIT or GL_DEPTH_BUFFER_BIT)

    var
      objectColor = vec3f(1.0f, 0.5f, 0.31f)
      lightColor = vec3f(1.0f, 1.0f, 1.0f)
      lightingModel = mat4f(1.0f)

    lightingShader.use()
    lightingShader.set("objectColor", objectColor)
    lightingShader.set("lightColor", lampColor)

    lightingShader.set("projection", projection)
    lightingShader.set("view", view)
    lightingShader.set("model", lightingModel)

    glBindVertexArray(cubeVAO)
    glDrawArrays(GL_TRIANGLES, 0, 36)

    lampShader.use()
    lampShader.set("projection", projection)
    lampShader.set("view", view)

    var model = translate(mat4(1.0f), lampPos).scale(vec3(0.2f))
    lampShader.set("model", model)

    glBindVertexArray(lightVAO)
    glDrawArrays(GL_TRIANGLES, 0, 36)

    window.glSwapWindow()

main()
