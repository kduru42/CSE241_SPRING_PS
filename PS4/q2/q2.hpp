#ifndef _MY_INTEGER_HPP_
#define _MY_INTEGER_HPP_

#include <iostream>
#include <cmath>
using namespace std;

class MyInteger
{
    private:
        int value;

    public:
        MyInteger(int x); // constructor
        inline int get_value() const {return (value);}; //getter of integer
        inline void set_value (int x) {value = x;}; //setter of integer
        int operator [] (int index) const; //index operator
    };

#endif
