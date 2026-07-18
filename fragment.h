#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "errorReporting.h"
const char *fragmentShaderSource = "#version 330 core\n"
                                   "out vec4 FragColor;\n"
                                   "in vec3 ourColor;\n"
                                   "in vec2 TexCoord;\n"
                                   "uniform sampler2D texture0;\n"
                                   "uniform sampler2D texture1;\n"
                                   "void main()\n"
                                   "{\n"
                                   "  FragColor = mix(texture(texture0, TexCoord) , texture(texture1,TexCoord),0.0);\n"

                                   "}\n\0";