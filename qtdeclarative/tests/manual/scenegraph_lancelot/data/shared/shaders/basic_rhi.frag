#version 440

layout(location = 0) in vec2 qt_TexCoord0;
layout(location = 0) out vec4 fragColor;

void main() {
    fragColor = vec4(qt_TexCoord0.x, qt_TexCoord0.y, 1, 1);
}
