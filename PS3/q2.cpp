#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int suitor_count;
    cout << "How many suitors there will be?" << endl;
    cin >> suitor_count;
    vector<int> suitors;
    for (int i = 1; i <= suitor_count; i++)
        suitors.push_back(i); //pushing all suitors
    for (int i = 0; i < suitor_count; i++)
        cout << suitors[i]; //printing all suitors
    cout << " initial list of suitors, start counting from 1" << endl;
    int to_erase; // erasing suitor in all turns
    while(suitors.size() != 1)
    {
        int count = 1; // when count is 3 erases the suitor
        for (int i = 0; i < suitors.size(); i++)
        {           
            if (count == 3)
            {
                int save_count = suitors[suitors.size() - 1]; // saving suitor at the very end
                to_erase = suitors[i]; 
                suitors.erase(suitors.begin() + i); //erasing
                suitor_count--; 
                for (int j = 0; j < suitors.size(); j++)
                    cout << suitors[j]; //printing remaining suitors
                if (suitors[i] == save_count && suitors[i] == to_erase)
                    cout << " suitor " << to_erase << " eleminated, contunie from " << suitors[0] << endl;
                else
                    cout << " suitor " << to_erase << " eleminated, contunie from " << suitors[i] << endl;
                count = 1;
            }
            count++;
            if (i == suitors.size() - 1) // if index at the end, turns back to begin
                i = 0;
            if (suitors.size() == 1) // if there is 1 suitor remaining, exits
            {
                cout << suitors[0] << " suitor " << to_erase << " is eliminated , " << suitors[0] << " is the lucky one" << endl;
                exit(1);
            }
        }
    }
    return (0);
}