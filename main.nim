import sdl2
import glm
import opengl


type SDLException = object of Exception

var dontQuit = true
loadExtensions()


template sdlFailIf(cond: typed, reason: string) =
  if cond: raise SDLException.newException(
    reason & ", SDL error: " & $getError())


proc handleInput() =
  var event = defaultEvent
  while pollEvent(event):
    case event.kind
    of QuitEvent:
      dontQuit = false
    else:
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
  sdlFailIf(not sdl2.init(INIT_VIDEO or INIT_TIMER or INIT_EVENTS)):
    "SDL2 initialization failed"

  # defer blocks get called at the end of the procedure, even if an
  # exception has been thrown
  defer: sdl2.quit()

  sdlFailIf(not setHint("SDL_RENDER_SCALE_QUALITY", "2")):
    "Linear texture filtering could not be enabled"

  let window = createWindow(title = "Our own 2D platformer",
    x = SDL_WINDOWPOS_CENTERED, y = SDL_WINDOWPOS_CENTERED,
    w = 800, h = 600, flags = SDL_WINDOW_SHOWN)
  sdlFailIf window.isNil: "Window could not be created"
  defer: window.destroy()

  let renderer = window.createRenderer(index = -1,
    flags = Renderer_Accelerated or Renderer_PresentVsync)
  sdlFailIf renderer.isNil: "Renderer could not be created"
  defer: renderer.destroy()

  # Set the default color to use for drawing
  renderer.setDrawColor(r = 110, g = 132, b = 174)

  let vertices = @[
    vec3(-0.5f, -0.5f, 0.0f),
    vec3(0.5f, -0.5f, 0.0f),
    vec3(0.0f,  0.5f, 0.0f)
  ]

  let vertexShaderSource = r"#version 330 core\n layout (location = 0) in vec3 aPos;\n void main()\n {\n gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n}\0 "

  let fragmentShaderSource = r"#version 330 core\n out vec4 FragColor;\n void main()\n {\n FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n}\n\0"

  var
    vbo: GLuint
    vertexShader: GLuint
    fragmentShader: GLuint
    shaderProgram: GLuint

  glGenBuffers(1,addr vbo)
  glBindBuffer(GL_ARRAY_BUFFER, vbo)
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices[0])*vertices.len, vertices[0].unsafe_addr, GL_STATIC_DRAW)

  vertexShader = glCreateShader(GL_VERTEX_SHADER)
  fragmentShader = glCreateShader(GL_FRAGMENT_SHADER)

  let cstr_vertex = allocCStringArray([vertexShaderSource])
  let cstr_fragment = allocCStringArray([fragmentShaderSource])

  glShaderSource(vertexShader, 1, cstr_vertex, nil)
  glShaderSource(fragmentShader, 1, cstr_fragment, nil)
  glCompileShader(vertexShader)
  glCompileShader(fragmentShader)
  deallocCStringArray(cstr_vertex)
  deallocCStringArray(cstr_fragment)

  if not GetShaderCompileStatus(vertexShader):
    echo GetShaderInfoLog(vertexShader)

  if not GetShaderCompileStatus(fragmentShader):
    echo GetShaderInfoLog(fragmentShader)


  shaderProgram = glCreateProgram()
  glAttachShader(shaderProgram, vertexShader)
  glAttachShader(shaderProgram, fragmentShader)
  glLinkProgram(shaderProgram)
  glUseProgram(shaderProgram)
  glDeleteShader(vertexShader)
  glDeleteShader(fragmentShader)

  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), 0)
  glEnableVertexAttribArray(0)


  # Game loop, draws each frame
  while dontQuit:
    # Draw over all drawings of the last frame with the default
    # color
    handleInput()
    renderer.clear()
    # Show the result on screen
    renderer.present()

main()
