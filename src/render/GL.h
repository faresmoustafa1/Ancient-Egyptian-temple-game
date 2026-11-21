#pragma once
// One place that decides where the OpenGL functions come from.
//   Desktop: OpenGL 3.3 core, loaded at runtime through GLAD.
//   Web:     WebGL 2 (OpenGL ES 3.0), provided directly by Emscripten.
#ifdef __EMSCRIPTEN__
    #include <GLES3/gl3.h>
    #define TEMPLE_GLSL_HEADER "#version 300 es\nprecision mediump float;\n"
#else
    #include <glad/gl.h>
    #define TEMPLE_GLSL_HEADER "#version 330 core\n"
#endif
