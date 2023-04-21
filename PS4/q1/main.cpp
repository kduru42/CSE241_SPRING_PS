#include "q1.hpp"

int main()
{
// Some test vectors
Vector2D v1(0,4), v2(3,2), v3(1,9), v4(4,2);
cout << "(" << v1.GetX() << "," << v1.GetY() << ") * (" << v2.GetX()
<< "," << v2.GetY() << ") = " << v1*v2 << endl;
cout << "(" << v2.GetX() << "," << v2.GetY() << ") * (" << v3.GetX()
<< "," << v3.GetY() << ") = " << v2*v3 << endl;
cout << "(" << v3.GetX() << "," << v3.GetY() << ") * (" << v4.GetX()
<< "," << v4.GetY() << ") = " << v3*v4 << endl;
return 0;
}