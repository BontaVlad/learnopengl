import opengl
import glm

type
  Shader* = object
    id*: GLuint


template GetShaderCompileStatus(shader: GLuint) : bool  =
  var r : GLint
  glGetShaderiv(shader.GLuint,GL_COMPILE_STATUS,addr r)
  r.bool


template GetShaderInfoLog(shader:GLuint) : string =
  var logLen : GLint
  glGetShaderiv(shader.GLuint,GL_INFO_LOG_LENGTH, addr logLen)
  var logStr = cast[ptr GLchar](alloc(logLen))
  glGetShaderInfoLog(shader.GLuint,logLen,addr logLen,logStr)
  $logStr


proc newShader*(vertexPath, fragmentPath: string): Shader =

  var
    vertexShaderSource = readFile(vertexPath)
    fragmentShaderSource = readFile(fragmentPath)
    cstr_vertex = allocCStringArray([vertexShaderSource])
    cstr_fragment = allocCStringArray([fragmentShaderSource])
    vertex_sh_id: GLuint
    fragment_sh_id: GLuint

  vertex_sh_id = glCreateShader(GL_VERTEX_SHADER)
  fragment_sh_id = glCreateShader(GL_FRAGMENT_SHADER)

  glShaderSource(vertex_sh_id, 1, cstr_vertex, nil)
  glShaderSource(fragment_sh_id, 1, cstr_fragment, nil)
  glCompileShader(vertex_sh_id)
  glCompileShader(fragment_sh_id)

  deallocCStringArray(cstr_vertex)
  deallocCStringArray(cstr_fragment)

  if not GetShaderCompileStatus(vertex_sh_id):
    echo GetShaderInfoLog(vertex_sh_id)

  if not GetShaderCompileStatus(fragment_sh_id):
    echo GetShaderInfoLog(fragment_sh_id)

  result.id = glCreateProgram()

  glAttachShader(result.id, vertex_sh_id)
  glAttachShader(result.id, fragment_sh_id)
  glLinkProgram(result.id)
  glDeleteShader(vertex_sh_id)
  glDeleteShader(fragment_sh_id)


proc use*(shader: Shader) =
  glUseProgram(shader.id)


proc set*(shader: Shader, name: string, value: bool|int) =
  glUniform1i(glGetUniformLocation(shader.id, name.cstring), value.GLint)

proc set*(shader: Shader, name: string, value: float) =
  glUniform1f(glGetUniformLocation(shader.id, name.cstring), value)

proc set*(shader: Shader, name: string, value: Vec3f) =
  var val = value
  glUniform3fv(glGetUniformLocation(shader.id, name.cstring), 1, addr val[0].GLfloat)

proc set*(shader: Shader, name: string, value: Mat4[float32]) =
  var val = value
  glUniformMatrix4fv(glGetUniformLocation(shader.id, name.cstring), 1.GLsizei, GL_FALSE, val.caddr)
