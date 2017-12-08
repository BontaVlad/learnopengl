import opengl


type
  Shader* = object
    id: GLuint


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

  let
    vertexShaderSource = readFile(vertexPath)
    fragmentShaderSource = readFile(fragmentPath)
    cstr_vertex = allocCStringArray([vertexShaderSource])
    cstr_fragment = allocCStringArray([fragmentShaderSource])

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

  glAttachShader(result.id, vertexShader)
  glAttachShader(result.id, fragmentShader)
  glLinkProgram(result.id)
  glDeleteShader(vertex_sh_id)
  glDeleteShader(fragment_sh_id)


proc use*(shader: Shader) =
  glUseProgram(shader.id)


proc set*(shader: Shader, name: string, value: bool|int)
  glUniform1i(glGetUniformLocation(shader.id, name.cstring), value.int)

proc set*(shader: Shader, name: string, value: float)
  glUniform1f(glGetUniformLocation(shader.id, name.cstring), value)

proc set*(shader: Shader, name: string, value: vec2)
  glUniform1f(glGetUniformLocation(shader.id, name.cstring), value)

proc set*(shader: Shader, name: string, value: mat4)
  glUniformMatrix4fv(glGetUniformLocation(result.id, name.cstring), 1.GLsizei, GL_FALSE, value.caddr)
 #    void setVec2(const std::string &name, const glm::vec2 &value) const
 #    { 
 #        glUniform2fv(glGetUniformLocation(ID, name.c_str()), 1, &value[0]); 
 #    }
 #    void setVec2(const std::string &name, float x, float y) const
 #    { 
 #        glUniform2f(glGetUniformLocation(ID, name.c_str()), x, y); 
 #    }
 #    // ------------------------------------------------------------------------
 #    void setVec3(const std::string &name, const glm::vec3 &value) const
 #    { 
 #        glUniform3fv(glGetUniformLocation(ID, name.c_str()), 1, &value[0]); 
 #    }
 #    void setVec3(const std::string &name, float x, float y, float z) const
 #    { 
 #        glUniform3f(glGetUniformLocation(ID, name.c_str()), x, y, z); 
 #    }
 #    // ------------------------------------------------------------------------
 #    void setVec4(const std::string &name, const glm::vec4 &value) const
 #    { 
 #        glUniform4fv(glGetUniformLocation(ID, name.c_str()), 1, &value[0]); 
 #    }
 #    void setVec4(const std::string &name, float x, float y, float z, float w) 
 #    { 
 #        glUniform4f(glGetUniformLocation(ID, name.c_str()), x, y, z, w); 
 #    }
 #    // ------------------------------------------------------------------------
 #    void setMat2(const std::string &name, const glm::mat2 &mat) const
 #    {
 #        glUniformMatrix2fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &mat[0][0]);
 #    }
 #    // ------------------------------------------------------------------------
 #    void setMat3(const std::string &name, const glm::mat3 &mat) const
 #    {
 #        glUniformMatrix3fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &mat[0][0]);
 #    }
 #    // ------------------------------------------------------------------------
 #    void setMat4(const std::string &name, const glm::mat4 &mat) const
 #    {
 #        glUniformMatrix4fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &mat[0][0]);
 #    }
