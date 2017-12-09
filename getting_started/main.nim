import sdl2
import glm
import math
import opengl
import stb_image/read as stbi
import ../lighting/camera
import ../lighting/shader


type SDLException = object of Exception

var
  dontQuit = true
  screenWidth : cint = 800
  screenHeight : cint = 600

let
  vertices : seq[float32] = @[
    -0.5f32, -0.5f32, -0.5f32,  0.0f32, 0.0f32,
    0.5f32, -0.5f32, -0.5f32,  1.0f32, 0.0f32,
    0.5f32,  0.5f32, -0.5f32,  1.0f32, 1.0f32,
    0.5f32,  0.5f32, -0.5f32,  1.0f32, 1.0f32,
    -0.5f32,  0.5f32, -0.5f32,  0.0f32, 1.0f32,
    -0.5f32, -0.5f32, -0.5f32,  0.0f32, 0.0f32,

    -0.5f32, -0.5f32,  0.5f32,  0.0f32, 0.0f32,
    0.5f32, -0.5f32,  0.5f32,  1.0f32, 0.0f32,
    0.5f32,  0.5f32,  0.5f32,  1.0f32, 1.0f32,
    0.5f32,  0.5f32,  0.5f32,  1.0f32, 1.0f32,
    -0.5f32,  0.5f32,  0.5f32,  0.0f32, 1.0f32,
    -0.5f32, -0.5f32,  0.5f32,  0.0f32, 0.0f32,

    -0.5f32,  0.5f32,  0.5f32,  1.0f32, 0.0f32,
    -0.5f32,  0.5f32, -0.5f32,  1.0f32, 1.0f32,
    -0.5f32, -0.5f32, -0.5f32,  0.0f32, 1.0f32,
    -0.5f32, -0.5f32, -0.5f32,  0.0f32, 1.0f32,
    -0.5f32, -0.5f32,  0.5f32,  0.0f32, 0.0f32,
    -0.5f32,  0.5f32,  0.5f32,  1.0f32, 0.0f32,

    0.5f32,  0.5f32,  0.5f32,  1.0f32, 0.0f32,
    0.5f32,  0.5f32, -0.5f32,  1.0f32, 1.0f32,
    0.5f32, -0.5f32, -0.5f32,  0.0f32, 1.0f32,
    0.5f32, -0.5f32, -0.5f32,  0.0f32, 1.0f32,
    0.5f32, -0.5f32,  0.5f32,  0.0f32, 0.0f32,
    0.5f32,  0.5f32,  0.5f32,  1.0f32, 0.0f32,

    -0.5f32, -0.5f32, -0.5f32,  0.0f32, 1.0f32,
    0.5f32, -0.5f32, -0.5f32,  1.0f32, 1.0f32,
    0.5f32, -0.5f32,  0.5f32,  1.0f32, 0.0f32,
    0.5f32, -0.5f32,  0.5f32,  1.0f32, 0.0f32,
    -0.5f32, -0.5f32,  0.5f32,  0.0f32, 0.0f32,
    -0.5f32, -0.5f32, -0.5f32,  0.0f32, 1.0f32,

    -0.5f32,  0.5f32, -0.5f32,  0.0f32, 1.0f32,
    0.5f32,  0.5f32, -0.5f32,  1.0f32, 1.0f32,
    0.5f32,  0.5f32,  0.5f32,  1.0f32, 0.0f32,
    0.5f32,  0.5f32,  0.5f32,  1.0f32, 0.0f32,
    -0.5f32,  0.5f32,  0.5f32,  0.0f32, 0.0f32,
    -0.5f32,  0.5f32, -0.5f32,  0.0f32, 1.0f32
  ]
  cubePositions = @[
    vec3( 0.0f,  0.0f,  0.0f),
    vec3( 2.0f,  5.0f, -15.0f),
    vec3(-1.5f, -2.2f, -2.5f),
    vec3(-3.8f, -2.0f, -12.3f),
    vec3( 2.4f, -0.4f, -3.5f),
    vec3(-1.7f,  3.0f, -7.5f),
    vec3( 1.3f, -2.0f, -2.5f),
    vec3( 1.5f,  2.0f, -2.5f),
    vec3( 1.5f,  0.2f, -1.5f),
    vec3(-1.3f,  1.0f, -1.5f)
  ]

var
  vbo: GLuint
  vao: GLuint
  ebo: GLuint
  texture1, texture2: GLuint
  width, height, channels: int
  data: seq[uint8]
  model = mat4(1.0'f32)
  deltaTime = 0.0f
  lastFrame = 0.0f
  cam = newCamera(vec3(0.0f, 0.0f, 0.3f), speed=0.2f)


# Initialize OpenGL
loadExtensions()
template sdlFailIf(cond: typed, reason: string) =
  if cond: raise SDLException.newException(
    reason & ", SDL error: " & $getError())


template ClearColor*(r:float32, g:float32, b:float32, a:float32) =
  glClearColor(r.GLfloat, g.GLfloat, b.GLfloat, a.GLfloat)

proc handleInput(deltaTime: float) =
  var evt = defaultEvent
  let keyState = getKeyboardState()

  while pollEvent(evt):
    case evt.kind
    of QuitEvent:
      dontQuit = false
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


template GetShaderCompileStatus*(shader: GLuint) : bool  =
  var r : GLint
  glGetShaderiv(shader.GLuint,GL_COMPILE_STATUS,addr r)
  r.bool


template GetShaderInfoLog*(shader:GLuint) : string =
  var logLen : GLint
  glGetShaderiv(shader.GLuint,GL_INFO_LOG_LENGTH, addr logLen)
  var logStr = cast[ptr GLchar](alloc(logLen))
  glGetShaderInfoLog(shader.GLuint,logLen,addr logLen,logStr)
  $logStr


proc main =
  sdlFailIf(not sdl2.init(INIT_EVERYTHING)):
    "SDL2 initialization failed"

  # defer blocks get called at the end of the procedure, even if an
  # exception has been thrown
  defer: sdl2.quit()

  sdlFailIf(not setHint("SDL_RENDER_SCALE_QUALITY", "2")):
    "Linear texture filtering could not be enabled"


  discard glSetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
  discard glSetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
  discard glSetAttribute(SDL_GL_ACCELERATED_VISUAL, 1);
  discard glSetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);


  let window = createWindow(title = "Our own 2D platformer",
    x = SDL_WINDOWPOS_CENTERED, y = SDL_WINDOWPOS_CENTERED,
        w = screenWidth, h = screenHeight, SDL_WINDOW_OPENGL or SDL_WINDOW_RESIZABLE)
  sdlFailIf window.isNil: "Window could not be created"

  discard setRelativeMouseMode(true.Bool32)
  discard window.glCreateContext()
  defer: window.destroy()


  glEnable(GL_DEPTH_TEST)                           # Enable depth testing for z-culling

  glGenVertexArrays(1, addr vao)
  glGenBuffers(1, addr vbo)
  # glGenBuffers(1, addr ebo)

  glBindVertexArray(vao)
  glBindBuffer(GL_ARRAY_BUFFER, vbo)
  # glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo)
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices[0])*vertices.len, vertices[0].unsafe_addr, GL_STATIC_DRAW)
  # glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices[0])*indices.len, indices[0].unsafe_addr, GL_STATIC_DRAW)

  glGenTextures(1, addr texture1)
  glBindTexture(GL_TEXTURE_2D, texture1)

  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT)
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT)
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR)
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR)

  stbi.set_flip_vertically_on_load(true)

  data = stbi.load("container.jpg", width, height, channels, stbi.Default)


  glTexImage2D(GL_TEXTURE_2D, 0.GLint, GL_RGB.GLint, width.GLsizei, height.GLsizei, 0.GLint, GL_RGB, GL_UNSIGNED_BYTE, addr data[0]);
  glGenerateMipmap(GL_TEXTURE_2D);

  data = stbi.load("awesomeface.png", width, height, channels, stbi.Default)


  glGenTextures(1, addr texture2)
  glBindTexture(GL_TEXTURE_2D, texture2)

  glTexImage2D(GL_TEXTURE_2D, 0.GLint, GL_RGB.GLint, width.GLsizei, height.GLsizei, 0.GLint, GL_RGBA, GL_UNSIGNED_BYTE, addr data[0]);

  glGenerateMipmap(GL_TEXTURE_2D);


  glVertexAttribPointer(0.GLuint, 3.GLint, cGL_FLOAT, false, (5 * sizeof(cGL_FLOAT)).GLsizei, cast[pointer](0))
  glEnableVertexAttribArray(0)

  glVertexAttribPointer(1.GLuint, 2.GLint, cGL_FLOAT, false, (5 * sizeof(cGL_FLOAT)).GLsizei, cast[pointer](3 * sizeof(cGL_FLOAT)))
  glEnableVertexAttribArray(1)

  var cubeShader = newShader("vertex_shader.vert", "fragment_shader.frag")
  cubeShader.use()
  cubeShader.set("texture1", 0)
  cubeShader.set("texture2", 1)


  glActiveTexture(GL_TEXTURE0)
  glBindTexture(GL_TEXTURE_2D, texture1)

  glActiveTexture(GL_TEXTURE1)
  glBindTexture(GL_TEXTURE_2D, texture2)


  # Game loop, draws each frame
  while dontQuit:
    # Draw over all drawings of the last frame with the default color

    ClearColor(0.2,0.3,0.3,1.0)
    glClear(GL_COLOR_BUFFER_BIT or GL_DEPTH_BUFFER_BIT)
    glBindVertexArray(vao)
    let currentFrame = getTicks().float
    deltaTime = currentFrame - lastFrame
    lastFrame = currentFrame

    handleInput(deltaTime)

    var
      view = cam.viewMatrix
      projection = perspective[float32](cam.zoom, float32(screenWidth / screenHeight), 0.1f, 100f)

    for i, position in pairs(cubePositions):
      model = mat4(1.0'f32)
      model = model.translate(position)
      let angle = i.float * getTicks().float / 100.0 * radians(5f)
      model = model.rotate(vec3(1.0'f32, 0.3'f32, 0.5'f32), angle)

      cubeShader.set("model", model)
      # glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "model").GLint, 1.GLsizei, GL_FALSE, model.caddr)

      glDrawArrays(GL_TRIANGLES, 0, 36)
    # glDrawElements(GL_TRIANGLES, 6.GLsizei, GL_UNSIGNED_INT, cast[pointer](0))

    # glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "projection").GLint, 1.GLsizei, GL_FALSE, projection.caddr)
    # glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "view").GLint, 1.GLsizei, GL_FALSE, view.caddr)
    cubeShader.set("projection", projection)
    cubeShader.set("view", view)
    glBindVertexArray(0)
    window.glSwapWindow()

main()
