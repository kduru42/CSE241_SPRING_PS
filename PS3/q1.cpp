#include <iostream>
#include "q1.hpp"
using namespace std;


int get_total_sold() {return (total_sold);};

HotDogStand::HotDogStand(int id, int sold)
{
    HotDogID = id;
    HowManySold = sold;
}

void HotDogStand::JustSold()
{
    total_sold++;
    HowManySold++;
}



