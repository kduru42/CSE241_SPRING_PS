#include "q2.hpp"

Student::Student() // constructor
{
    classList = new string [1];
}

/* taking input from the user */
void Student::InputData()
{
    cout << "Name: ";
    cin >> name;
    cout << "Number of classes: ";
    cin >> numClasses;
    classList = new string [numClasses];
    for (int i = 0; i < numClasses; i++)
    {
        cout << "Class " << i + 1 << ": ";
        cin >> classList[i];
    }
}
 /* printing the data of the student */
void Student::OutputData() const
{
    cout << "Name: " << name << endl;
    cout << "Number of classes: " << numClasses << endl;
    for (int i = 0; i < numClasses; i++)
        cout << "Class " << i + 1 << ": " << classList[i] << endl; 
}

/* Resets the students class information */
void Student::ResetClasses()
{
    numClasses = 0;
    delete [] classList;
    classList = new string [0];
}

/* Asignment operator */
Student& Student::operator= (const Student &other)
{
    string *temp;
    temp = new string [other.numClasses];
    for (int i = 0; i < other.numClasses; i++)
        temp[i] = other.classList[i];
    delete [] classList;
    classList = temp;
    name = other.name;
    numClasses = other.numClasses;
    return (*this);
}

Student::~Student() //destructor 
{
    delete [] classList;
}