#ifndef _Q2_HPP_
#define _Q2_HPP_
using namespace std;

#include <string>
#include <iostream>

class Student
{
    private:
        string name;
        int numClasses;
        string *classList;
    
    public:
        Student();
        inline string get_name () const {return (name);};
        inline int get_num_classes() const {return (numClasses);};
        inline string * get_class_list () const {return (classList);};
        inline void set_name (string n) {name = n;};
        inline void set_classes(int n) {numClasses = n;};
        void InputData();
        void OutputData() const;
        void ResetClasses();
        Student &operator= (const Student &other);
        ~Student();
};


#endif