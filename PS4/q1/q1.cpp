#include "q1.hpp"

Vector2D::Vector2D(int xd, int yd)
{
    x = xd;
    y = yd;
}

inline void Vector2D::set_x_y(int xd, int yd)
{
    x = xd;
    y = yd;
}

int Vector2D::operator*(const Vector2D &other) const
{
    return ((x * other.x) + (y * other.y));
}