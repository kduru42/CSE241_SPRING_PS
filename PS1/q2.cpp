#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int humanTurn(int humanTotalScore)
{
    int totalForRound = 0; //total score for just one turn to add total score
    int random_dice; // dice number to 1-6
    char move; // r or h
    srand(time(NULL));

    do
    {
        cout << "What are you going to do?" << endl;
        cin >> move;
        if (move == 'r')
        {
            random_dice = rand() % 6 + 1; // dice randomized between 1 and 6
            cout << "Dice is: " << random_dice << endl;
            if (random_dice == 1)
                return (0);
            else
            {
                totalForRound += random_dice;
                cout << "Total for this round: " << totalForRound << endl;
            }
        }
    } while (move != 'h');
    
    return (totalForRound);
}

int computerTurn(int computerTotalScore)
{
    int totalForRound = 0;
    int random_dice;

    srand(time(NULL));

    do
    {
        random_dice = rand() % 6 + 1;
        cout << "Dice is: " << random_dice << endl;
        if (random_dice == 1)    
            return (0);
        else
        {
            totalForRound += random_dice;
            cout << "Total for this round: " << totalForRound << endl;
        }
    } while (totalForRound < 20);
    
    return (totalForRound);
}


int main()
{
    int humanTotalScore = 0;
    int computerTotalScore = 0;

    while (1)
    {
        cout << "YOUR TURN\n\n";
        humanTotalScore += humanTurn(humanTotalScore);
        cout << "Your last score: " << humanTotalScore << endl;  
        if (humanTotalScore >= 100) // if human or computer reaches 100 points, it wins and programe executes
        {
            cout << "You won\n\n";
            break;
        }
        cout << "COMPUTER'S TURN\n\n";
        computerTotalScore += computerTurn(computerTotalScore);
        cout << "Computer's last score: "<< computerTotalScore << endl;
        if (computerTotalScore >= 100)
        {
            cout << "Computer won\n\n";
            break;
        }
    }
    
    return (0);
}