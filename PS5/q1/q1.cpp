#include "q1.hpp"

Polynomial::Polynomial() // constructor
{
    size = 1;
    coefficients = new double [size];
}

/* copy constructor */
Polynomial::Polynomial(const Polynomial &other)
{
    coefficients = new double [other.size];
    for (int i = 0; i < other.size; i++)
        coefficients[i] = other.coefficients[i];
    size = other.size;
}

/* assignment operator */
Polynomial& Polynomial::operator= (const Polynomial &other)
{
    double *temp_c;
    temp_c = new double [other.size];
    for (int i = 0; i < other.size; i++) // copying 
        temp_c[i] = other.coefficients[i];
    delete [] coefficients; // delete before assigning
    coefficients = temp_c;
    size = other.size;
    return (*this);
}

Polynomial::~Polynomial() //destructor
{
    delete [] coefficients;
}

Polynomial::Polynomial(double arr[], int degree)
{
    coefficients = new double [degree];
    for (int i = 0; i < degree; i++)
        coefficients[i] = arr[i];
    size = degree;
}

Polynomial Polynomial::operator+ (const Polynomial &other) const
{
    Polynomial new_obj;
    if (size >= other.size) // if the objects size bigger than others size
    {
        new_obj.coefficients = new double [size];
        for (int i = 0; i < size; i++)
        {
            if (i < other.size)
                new_obj.coefficients[i] = coefficients[i] + other.coefficients[i]; // adding two coefficients
            else
                new_obj.coefficients[i] = coefficients[i];
        }
        new_obj.size = size;
    }
    else
    {
        new_obj.coefficients = new double [other.size];
        for (int i = 0; i < other.size; i++)
        {
            if (i < size)
                new_obj.coefficients[i] = coefficients[i] + other.coefficients[i];
            else
                new_obj.coefficients[i] = other.coefficients[i];
        }
        new_obj.size = other.size;
    }
    return (new_obj);
}

Polynomial Polynomial::operator- (const Polynomial &other) const
{
    Polynomial new_obj;
    if (size >= other.size)
    {
        new_obj.coefficients = new double [size];
        for (int i = 0; i < size; i++)
        {
            if (i < other.size)
                new_obj.coefficients[i] = coefficients[i] - other.coefficients[i];
            else
                new_obj.coefficients[i] = coefficients[i];
        }
        new_obj.size = size;
    }
    else
    {
        new_obj.coefficients = new double [other.size];
        for (int i = 0; i < other.size; i++)
        {
            if (i < size)
                new_obj.coefficients[i] = coefficients[i] - other.coefficients[i];
            else
                new_obj.coefficients[i] = other.coefficients[i];
        }
        new_obj.size = other.size;
    }
    return (new_obj);
}

Polynomial Polynomial::operator* (const Polynomial &other) const
{
    Polynomial new_obj;
    new_obj.coefficients = new double [size + other.size - 1];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < other.size; j++)
            new_obj.coefficients[i + j] += coefficients[i] * other.coefficients[j];
    new_obj.size = size + other.size - 1; 
    return (new_obj);
}

double& Polynomial::operator[](int degree)
{
    return (coefficients[degree]);
}

const double& Polynomial::operator[](int degree) const
{
    return (coefficients[degree]);
}
