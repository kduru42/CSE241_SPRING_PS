#include "Pair.hpp"
#include "Pair.cpp"

int main()
{
    Pair<char, char> p('A', 'B');
    cout << "First is " << p.getFirst() << endl;
    p.setFirst('Z');
    cout << "First changed to " << p.getFirst() << endl;
    cout << "The pair is: " << p.getFirst() << ", " << p.getSecond() << endl;

    Pair<int, string> p2(34, "Bill");
    Pair<string, int> p3("Bill", 34);
    cout << "The pair is: " << p2.getFirst() << ", " << p2.getSecond() << endl;

    return (0);
}