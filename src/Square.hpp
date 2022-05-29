#pragma once

struct EkVec3 {
    float x, y, z;

    constexpr EkVec3(float _x, float _y, float _z): x(_x), y(_y), z(_z) { }
};

class Mobject {
private:

public:
    virtual void shift();
};