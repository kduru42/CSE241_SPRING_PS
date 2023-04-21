#include "q1.hpp"

int main()
{
    HotDogStand stand1(1, 0);
    HotDogStand stand2(2, 0);
    HotDogStand stand3(3, 0);

    stand1.JustSold();
    stand2.JustSold();
    stand3.JustSold();

    cout << "How many sold by stand1: " << stand1.get_sold() << endl;
    cout << "How many sold by stand2: " << stand2.get_sold() << endl;
    cout << "How many sold by stand3: " << stand3.get_sold() << endl;
    cout << "How many sold in total: " << get_total_sold() << endl;

    return 0;
}