#ifndef _SET_HPP_
# define _SET_HPP_

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Set
{
    private:
        T *arr;
        int size;

    public:
        Set();
        void add(const T data);
        inline int getSize() const {return (size);};
        T* getArray() {return (arr);};

};

#endif