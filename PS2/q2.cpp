#include <iostream>
#include <cmath>
#define MAX_LENGTH 20
using namespace std;

int find_digits(int nb) //function to find digit count
{
    int count = 0;
    while (nb)
    {
        nb /= 10;
        count++;
    }
    return (count);
}

int main()
{
    int *arr = new int [MAX_LENGTH];
    int nb1, nb2;
    int total = 0; //add of two integers
    cout << "Please enter first number: ";
    cin >> nb1;
    cout << "Please enter second number: ";
    cin >> nb2;
    int digits_nb1 = find_digits(nb1);
    int digits_nb2 = find_digits(nb2);
    if (digits_nb1 > digits_nb2) //case of digits of nb1 bigger than digits of nb2
    {
        int count = 0;
        int flag = 0;
        while (count <= digits_nb1 - digits_nb2)
        {
            for (int i = 0; i <= digits_nb1 - digits_nb2; i++)
            {
                int temp_nb1 = nb1;
                int temp_nb2 = nb2;
                for (int j = 0; j < i; j++)
                {
                    temp_nb1 /= 10;
                    temp_nb2 /= 10;
                }
                char total_of_two = (((temp_nb1 % 10) + (temp_nb2 % 10)) % 10) + 48;
                if (flag) // if komşudan aldım bir tane flag becomes 1
                    total += (((total_of_two + 1) - 48) * pow(10, i));
                else
                    total += ((total_of_two - 48) * pow(10, i));
                if (((temp_nb1 % 10) + (temp_nb2 % 10)) >= 10)
                    flag = 1;
                else
                    flag = 0;
                count++;
            }
        }
        while (count <= digits_nb1)
        {
            for (int i = count; i <= digits_nb1; i++)
            {
                int temp = nb1;
                for (int j = 0; j < i; j++)
                    temp /= 10;
                char number = (temp % 10) + 48;
                if (flag)
                    total += ((number + 1) - 48) * pow(10, i);
                else
                    total += (number - 48) * pow(10, i);
                if (number + 1 == 10)
                    flag = 1;
                else 
                    flag = 0;
                count++;     
            }
        }
    }
    else if (digits_nb1 < digits_nb2)
    {
        int count = 0;
        int flag = 0;
        while (count <= digits_nb2 - digits_nb1)
        {
            for (int i = 0; i <= digits_nb2 - digits_nb1; i++)
            {
                int temp_nb1 = nb1;
                int temp_nb2 = nb2;
                for (int j = 0; j < i; j++)
                {
                    temp_nb1 /= 10;
                    temp_nb2 /= 10;
                }
                char total_of_two = (((temp_nb1 % 10) + (temp_nb2 % 10)) % 10) + 48;
                if (flag)
                    total += (((total_of_two + 1) - 48) * pow(10, i));
                else
                    total += ((total_of_two - 48) * pow(10, i));
                if (((temp_nb1 % 10) + (temp_nb2 % 10)) >= 10)
                    flag = 1;
                else
                    flag = 0;
                count++;
            }
        }
        while (count <= digits_nb2)
        {
            for (int i = count; i <= digits_nb2; i++)
            {
                int temp = nb2;
                for (int j = 0; j < i; j++)
                    temp /= 10;
                char number = (temp % 10) + 48;
                if (flag)
                    total += ((number + 1) - 48) * pow(10, i);
                else
                    total += (number - 48) * pow(10, i);
                if (number + 1 == 10)
                    flag = 1;
                else 
                    flag = 0;
                count++;     
            }
        }
    }
    else if (digits_nb1 == digits_nb2)
    {
        int count = 0;
        int flag = 0;
        while (count <= digits_nb1)
        {
            for (int i = 0; i <= digits_nb1; i++)
            {
                int temp_nb1 = nb1;
                int temp_nb2 = nb2;
                char total_of_two;
                for (int j = 0; j < i; j++)
                {
                    temp_nb1 /= 10;
                    temp_nb2 /= 10;
                }
                if (i == digits_nb1)
                    total_of_two = (((temp_nb1 % 10) + (temp_nb2 % 10))) + 48;
                else
                    total_of_two = (((temp_nb1 % 10) + (temp_nb2 % 10)) % 10) + 48;

                if (flag)
                    total += (((total_of_two + 1) - 48) * pow(10, i));
                else
                    total += ((total_of_two - 48) * pow(10, i));

                if (((temp_nb1 % 10) + (temp_nb2 % 10)) >= 10)
                    flag = 1;
                else
                    flag = 0;
                count++;
            }
        }
    }
    cout << "Total integer after addition: "<< total << endl;
    if (find_digits(total) > MAX_LENGTH)
        cout << "Integer overflow\n";
    for (int i = find_digits(total) - 1, x = 0; i >= 0; i--, x++)
    {
        int temp_total = total;
        for (int j = 0; j < i; j++)
            temp_total /= 10;
        arr[x] = temp_total % 10;
    }
    cout << "Integer after putting al digits to array: ";
    for (int i = 0; i < find_digits(total); i++)
        cout << arr[i];
    return (0);
}