#version 330 core
layout(location = 0) in vec3 position;  // posi��o dos v�rtices
layout(location = 1) in vec3 normal;    // normal dos v�rtices

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

out vec3 fragPosition;
out vec3 fragNormal;

void main() {
    fragPosition = vec3(model * vec4(position, 1.0));
    fragNormal = mat3(transpose(inverse(model))) * normal; // normal transformada

    gl_Position = projection * view * vec4(fragPosition, 1.0);
}
