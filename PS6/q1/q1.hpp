#ifndef _Q1_HPP_
# define _Q1_HPP_

#include <iostream>
#include <string> 
using namespace std;

class DynamicStringArray
{
    private:
        string *dynamicArray;
        int size;

    public:
        DynamicStringArray();
        ~DynamicStringArray();
        DynamicStringArray(const DynamicStringArray &other);
        inline int getSize() const {return (size);};
        void addEntry(const string str);
        bool deleteEntry(const string str);
        string getEntry(int index);
        DynamicStringArray& operator=(const DynamicStringArray &other);
};


#endif