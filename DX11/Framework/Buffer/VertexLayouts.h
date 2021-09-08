#pragma once

struct Vertex { //정점 : 3차원 공간에서의 한점
    Float3 position;
    Float4 color;

    Vertex(float x, float y, float r, float g, float b)
    {
        position = Float3(x, y, 0);
        color = Float4(r, g, b, 1);
    }
};