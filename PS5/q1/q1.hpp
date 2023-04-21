#ifndef _Q1_HPP_
#define _Q1_HPP_
using namespace std;

#include <cmath>
#include <iostream>

class Polynomial
{
    private:
        double *coefficients; // array for the coeffcients
        int size; // size of the polynomail
    public:
        Polynomial();
        Polynomial(const Polynomial &other);
        Polynomial &operator= (const Polynomial &other);
        ~Polynomial();
        Polynomial(double arr[], int degree);
        Polynomial operator+ (const Polynomial &other) const;
        Polynomial operator- (const Polynomial &other) const;
        Polynomial operator* (const Polynomial &other) const;
        double& operator[](int degree);
        const double& operator[](int degree) const;
        inline int mySize() const {return (size);};
        inline double *get_coefficient() const {return (coefficients);};
        static int evaluate (Polynomial &obj, int num);
};

static int evaluate (Polynomial &obj, int num)
{
    int result = 0;
    for (int i = 0; i < obj.mySize(); i++)
        result += obj.get_coefficient()[i] * pow(num,i);
    return (result);
}



#endif