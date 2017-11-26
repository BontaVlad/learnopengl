import sdl2
import glm
import opengl


type SDLException = object of Exception

var dontQuit = true

loadExtensions()


# Initialize OpenGL
loadExtensions()

template sdlFailIf(cond: typed, reason: string) =
  if cond: raise SDLException.newException(
    reason & ", SDL error: " & $getError())


template ClearColor*(r:float32, g:float32, b:float32, a:float32) =
  glClearColor(r.GLfloat, g.GLfloat, b.GLfloat, a.GLfloat)

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
  sdlFailIf(not sdl2.init(INIT_EVERYTHING)):
    "SDL2 initialization failed"

  # defer blocks get called at the end of the procedure, even if an
  # exception has been thrown
  defer: sdl2.quit()

  sdlFailIf(not setHint("SDL_RENDER_SCALE_QUALITY", "2")):
    "Linear texture filtering could not be enabled"

  let window = createWindow(title = "Our own 2D platformer",
    x = SDL_WINDOWPOS_CENTERED, y = SDL_WINDOWPOS_CENTERED,
        w = 800, h = 600, SDL_WINDOW_OPENGL or SDL_WINDOW_RESIZABLE)
  sdlFailIf window.isNil: "Window could not be created"
  discard window.glCreateContext()
  defer: window.destroy()

  let
    vertices = @[
      -0.5f32, -0.5f32, 0.0f32,
      0.5f32, -0.5f32, 0.0f32,
      0.0f32,  0.5f32, 0.0f32
    ]
    vertexShaderSource = readFile("vertex_shader.vert")
    fragmentShaderSource = readFile("fragment_shader.frag")

  var
    vbo: GLuint
    vao: GLuint
    vertexShader: GLuint
    fragmentShader: GLuint
    shaderProgram: GLuint

  glGenBuffers(1, addr vbo)
  glGenVertexArrays(1, addr vao)
  glBindVertexArray(vao)
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
  glDeleteShader(vertexShader)
  glDeleteShader(fragmentShader)

  glVertexAttribPointer(0.GLuint, 3.GLint, cGL_FLOAT, false, (3 * sizeof(cGL_FLOAT)).GLsizei, cast[pointer](0))
  glEnableVertexAttribArray(0)

  glUseProgram(shaderProgram)
  glBindVertexArray(vao)
  glDrawArrays(GL_TRIANGLES, 0, 3)


  # Game loop, draws each frame
  while dontQuit:
    # Draw over all drawings of the last frame with the default
    # color
    handleInput()

    ClearColor(0.2,0.3,0.3,1.0)
    glClear(GL_COLOR_BUFFER_BIT)
    glUseProgram(shaderProgram)
    glBindVertexArray(vao)
    glDrawArrays(GL_TRIANGLES, 0, 3)
    window.glSwapWindow()

main()
