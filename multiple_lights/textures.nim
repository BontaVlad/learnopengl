import opengl
import stb_image/read as stbi

proc loadTexture*(filepath: string): GLuint =

  var
    width, height, channels: int
    data: seq[uint8]

  stbi.set_flip_vertically_on_load(true)
  data = stbi.load(filepath, width, height, channels, stbi.Default)
  if data.len == 0:
    quit("Failed to load texture")

  var texture: GLuint

  glGenTextures(1, addr texture)
  glBindTexture(GL_TEXTURE_2D, texture)

  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT)
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT)
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR)
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR)

  glTexImage2D(GL_TEXTURE_2D, 0.GLint, GL_RGB.GLint, width.GLsizei, height.GLsizei, 0.GLint, GL_RGBA, GL_UNSIGNED_BYTE, addr data[0])
  glGenerateMipmap(GL_TEXTURE_2D)
  return texture
