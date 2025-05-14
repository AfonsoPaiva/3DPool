#define GLEW_STATIC
#pragma once
#include <GL/glew.h>
#include "Renderable.h"

class PoolTable : public Renderable {
public:
    PoolTable();    // Construtor
    ~PoolTable();   // Destruidor

    void setup();    // Configura��o do paralelep�pedo (mesa de bilhar)
    void render(const glm::mat4& view, const glm::mat4& projection, const glm::vec3& lightPos, const glm::vec3& viewPos, const glm::vec3& lightColor, bool useLighting) override;
    GLuint getShaderProgram() const;

private:
    GLuint VBO, VAO;// Buffers do OpenGL
    GLuint shaderProgram;
};
