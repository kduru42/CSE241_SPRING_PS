#include "q2.hpp"

int main()
{
Student s1, s2;
    s1.InputData(); // Input data for student 1
    cout << "Student 1's data:" << endl;
    s1.OutputData(); // Output data for student 1
    cout << endl;
    s2 = s1;
    cout << "Student 2's data after assignment from student 1:" << endl;
    s2.OutputData(); // Should output same data as for student 1
    s1.ResetClasses();
    cout << "Student 1's data after reset:" << endl;
    s1.OutputData(); // Should have no classes
    cout << "Student 2's data, should still have original classes:" << endl;
    s2.OutputData(); // Should still have original classes
    cout << endl;
    return 0;
}
