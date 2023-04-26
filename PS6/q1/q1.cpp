#include "q1.hpp"

/* Default constructor */
DynamicStringArray::DynamicStringArray()
{
    dynamicArray = NULL;
    size = 0;
}

/* Copy constructor */
DynamicStringArray::DynamicStringArray(const DynamicStringArray &other)
{
    string *temp;
    temp = new string [other.size];
    for (int i = 0; i < other.size; i++) // copying into temp array
        temp[i] = other.dynamicArray[i];
    dynamicArray = temp;
    size = other.size;
}

/* Destructor */
DynamicStringArray::~DynamicStringArray()
{
    delete [] dynamicArray;
}

/* Function to add an element to the string */
void DynamicStringArray::addEntry(const string str)
{
    string *temp;
    temp = new string [size + 1];
    for (int i = 0; i < size; i++)
        temp[i] = dynamicArray[i];
    temp[size] = str;
    delete [] dynamicArray;
    dynamicArray = temp;
    size++;
}

/*Function to delete an element from the string */
bool DynamicStringArray::deleteEntry(const string str)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
        if (dynamicArray[i] == str)
            flag = 1;
    if (flag != 1)
        return (false);
    string *temp;
    temp = new string [size - 1];
    int i = 0;
    int j = 0;
    while (i < size)
    {
        if (dynamicArray[i] != str)
        {
            temp[j] = dynamicArray[i];
            j++;
        }
        i++;
    }
    delete [] dynamicArray;
    dynamicArray = temp;
    size--;
    return (true);
}

/* Function to return the element that index locating */
string DynamicStringArray::getEntry(int index)
{
    if (index < 0 || index >= size)
        return (NULL);
    return (dynamicArray[index]);
}

/* Assignment operator */
DynamicStringArray& DynamicStringArray::operator=(const DynamicStringArray& other)
{
    string *temp;
    temp = new string [other.size];
    for (int i = 0; i < other.size; i++)
        temp[i] = other.dynamicArray[i];
    delete [] dynamicArray;
    dynamicArray = temp;
    size = other.size;
    return (*this);
}