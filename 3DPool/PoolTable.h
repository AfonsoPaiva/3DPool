#define GLEW_STATIC
#pragma once
#include <GL/glew.h>
#include "Renderable.h"

class PoolTable : public Renderable {
public:
    PoolTable();    // Construtor
    ~PoolTable();   // Destruidor

    void setup();    // Configura��o do paralelep�pedo (mesa de bilhar)
    void render() override;   // Renderiza��o da mesa de bilhar
    GLuint getShaderProgram() const;

private:
    GLuint VBO, VAO;// Buffers do OpenGL
    GLuint shaderProgram;
};
