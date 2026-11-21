// GLAD 2 implementation. This is the ONLY file that defines GLAD_GL_IMPLEMENTATION.
// Never define it anywhere else, and never put other code here.
// (The web build gets WebGL directly from Emscripten, so GLAD is not used there.)
#ifndef __EMSCRIPTEN__
#define GLAD_GL_IMPLEMENTATION
#include <glad/gl.h>
#endif
