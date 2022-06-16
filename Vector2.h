#pragma once
class Vector2
{

public:
    float x;
    float y;

    void SetX(float x);
    void SetY(float y);

    float GetX();
    float GetY();

    Vector2 operator+(Vector2 a);
    Vector2 operator-(Vector2 a);
    Vector2 operator*(float a);
    float Norm();
    Vector2 Unit();
};

