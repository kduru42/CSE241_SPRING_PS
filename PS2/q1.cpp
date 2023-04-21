#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void aaron_shoots(int aaron, int &bob, int &charlie)
{
    if (aaron == 0) return ; // returns if he is dead

    int shot = rand() % 3; // 1 / 3 possibility
    if (shot == 0)
    {
        if (charlie == 1) charlie = 0; // if charlie alive sets him dead
        else if (bob == 1) bob = 0; // if bob alive sets him dead
    }
    return ;
}

void bob_shoots(int &aaron, int bob, int &charlie)
{
    if (bob == 0) return ; // returns if he is dead

    int shot = rand() % 2; // 1 / 2 possibility
    if (shot == 0)
    {
        if (charlie == 1) charlie = 0; // if charlie alive sets him dead
        else if (aaron == 1) aaron = 0; // if aaron alive sets him dead
    }
    return ;
}

void charlie_shoots(int &aaron, int &bob, int charlie)
{
    if (charlie == 0) return ; // returns if he is dead. he shots %100

    if (bob == 1) bob = 0; // if bob alive sets him dead
    else if (aaron == 1) aaron = 0; //if aaron alive sets him dead

    return ;
}


int main()
{
    // They will be 1 if they are alive and 0 if they are dead. At first they all set to 1
    int aaron = 1;
    int bob = 1;
    int charlie = 1;
    int win_count_aaron = 0;
    int win_count_bob = 0;
    int win_count_charlie = 0;
    srand(time(NULL)); // to obtain random numbers

    for (int i = 0; i < 1000; i++)
    {
        aaron = 1;
        bob = 1;
        charlie = 1;
        while ((aaron == 1 && bob == 1 && charlie == 1) //when there are persons alive more than one, duel continues
                    || (aaron == 1 && bob == 1 && charlie == 0)
                    || (aaron == 0 && bob == 1 && charlie == 1)
                    || (aaron == 1 && bob == 0 && charlie == 1))
        {
            aaron_shoots(aaron, bob, charlie);
            bob_shoots(aaron, bob, charlie);
            charlie_shoots(aaron, bob, charlie);
        }
        if (aaron == 1 && bob == 0 && charlie == 0)
            win_count_aaron++;
        else if (aaron == 0 && bob == 1 && charlie == 0)
            win_count_bob++;
        else if (aaron == 0 && bob == 0 && charlie == 1)
            win_count_charlie++;
    }
    cout << "Aaron won " << win_count_aaron << "/1000 or %" << (float)((float)win_count_aaron/10.0) << endl;
    cout << "Bob won " << win_count_bob << "/1000 or %" << (float)((float)win_count_bob/10.0) << endl;
    cout << "Charlie won " << win_count_charlie << "/1000 or %" << (float)((float)win_count_charlie/10.0) << endl;

}
