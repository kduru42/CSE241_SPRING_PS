#include "Set.hpp"

template <typename T>
Set<T>::Set()
{
    size = 0;
}

template <typename T>
void Set<T>::add(const T data)
{
    if (size == 0)
    {
        arr = new T [size + 1];
        arr[0] = data;
        size++;
    }
    else
    {
        T* temp = new T [size + 1];
        for (int i = 0; i < size; i++)
            temp[i] = arr[i];
        temp[size] = data;
        delete [] arr;
        arr = temp;
        size++;
    }
}