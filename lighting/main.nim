import sdl2
import glm
import opengl


type SDLException = object of Exception


var
  run = true
  screenWidth : cint = 800
  screenHeight : cint = 600
  # fov = 45.0f


# Initialize OpenGL
loadExtensions()
template sdlFailIf(cond: typed, reason: string) =
  if cond: raise SDLException.newException(
    reason & ", SDL error: " & $getError())


template ClearColor*(r:float32, g:float32, b:float32, a:float32) =
  glClearColor(r.GLfloat, g.GLfloat, b.GLfloat, a.GLfloat)


proc handleInput() =
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
      # if fov >= 1.0f and fov <= 45.0f:
      #   fov -= wheelEvent.y.float32
      # if fov <= 1.0f:
      #   fov = 1.0f
      # if fov >= 45.0f:
      #   fov = 45.0f

    # of MouseMotion:
    #   var
    #     motionEvent = cast[MouseMotionEventPtr](addr(evt))
    #     xpos = motionEvent.xrel.float32
    #     ypos = motionEvent.yrel.float32

    #   var
    #     sensitivity = 0.1f
    #     front = vec3(0.0f, 0.0f, 0.0f)

    #   if pitch > 89.0f:
    #     pitch = 89.0f
    #   if pitch <  - 89.0f:
    #     pitch = -89.0f

    #   xpos *= sensitivity
    #   ypos *= sensitivity
    #   yaw += xpos
    #   pitch -= ypos

    #   front.x = cos(radians(pitch)) * cos(radians(yaw))
    #   front.y = sin(radians(pitch))
    #   front.z = cos(radians(pitch)) * sin(radians(yaw))
    #   cameraFront = normalize(front)
    #   # camera.ProcessMouseMovement(motionEvent.xrel.float32,motionEvent.yrel.float32)
    else:
      discard


  # if keyState[SDL_SCANCODE_UP.uint8] != 0:
  #   cameraPos += cameraSpeed * cameraFront
  # if keyState[SDL_SCANCODE_DOWN.uint8] != 0:
  #   cameraPos -= cameraSpeed * cameraFront
  # if keyState[SDL_SCANCODE_LEFT.uint8] != 0:
  #   cameraPos -= normalize(cross(cameraFront, cameraUp)) * cameraSpeed
  # if keyState[SDL_SCANCODE_RIGHT.uint8] != 0:
  #   cameraPos += normalize(cross(cameraFront, cameraUp)) * cameraSpeed
  #   # camera.ProcessKeyBoard(RIGHT,elapsedTime)
  # if keyState[SDL_SCANCODE_ESCAPE.uint8] != 0:
  #   discard


proc main =
  sdlFailIf(not sdl2.init(INIT_EVERYTHING)):
    "SDL2 initialization failed"

    # defer blocks get called at the end of the procedure, even if an
    # exception has been thrown
  defer: sdl2.quit()

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



#       unsigned int lightVAO;
#       glGenVertexArrays(1, &lightVAO);
#       glBindVertexArray(lightVAO);
#       // we only need to bind to the VBO, the container's VBO's data already contains the correct data.
#       glBindBuffer(GL_ARRAY_BUFFER, VBO);
#       // set the vertex attributes (only position data for our lamp)
#       glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
#       glEnableVertexAttribArray(0);

  var
    lightVAO: GLuint
    VBO: GLuint


  glGenVertexArrays(1, addr lightVAO)
  glBindVertexArray(lightVAO)

  glBindBuffer(GL_ARRAY_BUFFER, VBO)
  glVertexAttribPointer(0.GLuint, 3.GLint, cGL_FLOAT, false, (3 * sizeof(cGL_FLOAT)).GLsizei, cast[pointer](0))
  glEnableVertexAttribArray(0)


  while run:
    handleInput()
    ClearColor(0.2,0.3,0.3,1.0)
    glClear(GL_COLOR_BUFFER_BIT or GL_DEPTH_BUFFER_BIT)
    window.glSwapWindow()


main()
