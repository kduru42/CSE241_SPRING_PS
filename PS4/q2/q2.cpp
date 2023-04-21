#include "q2.hpp"

MyInteger::MyInteger(int x)
{
    value = x;
}

int MyInteger::operator[](int index) const
{
    if (index < 0) // invalid index
        return (-1);    
    int temp = value; // temp variable for value
    for (int i = 0; i < index; i++)
        temp /= 10;
    if (!temp && index > 0) // if there is no digit
        return (-1);
    else
        return (temp % 10);
}