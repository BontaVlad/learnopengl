all:
	MESA_GL_VERSION_OVERRIDE=3.3 nim c -r --verbosity:0 main.nim
