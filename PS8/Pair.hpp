#ifndef _PAIR_HPP_
# define _PAIR_HPP_

#include <iostream>
#include <string>
using namespace std;


template <typename T1, typename T2>
class Pair
{
    private:
        T1 first; //first type
        T2 second; //second type
    
    public:
        Pair() {};
        Pair(T1 data1, T2 data2);
        inline T1 getFirst() const {return (first);};
        inline T2 getSecond() const {return (second);};
        inline void setFirst(T1 data) {first = data;};
        inline void setSecond(T2 data) {second = data;};
};

#endif