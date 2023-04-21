#ifndef Q1_HPP
#define Q1_HPP

#include <iostream>
using namespace std;

class HotDogStand
{
private:
     int HotDogID; //id of hotdog
     int HowManySold; // sold count of 1 stand
     
public:
    HotDogStand(int id, int sold); //constructor
    void JustSold(); // increases sold count 1
    int get_sold() const {return (HowManySold);}; //sold getter
};

static int total_sold = 0; // total sold counts of all stands
int get_total_sold(); // getter of total sold

#endif