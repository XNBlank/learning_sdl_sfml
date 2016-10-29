#pragma once
#include <SDL.h>
#include <glew.h>

class Sprite{
public:
    Sprite();
    ~Sprite();

    void Init(float x, float y, float width, float height);

    void Draw();

private:
    float _x;
    float _y;
    float _width;
    float _height;

    GLuint _vboID;
};