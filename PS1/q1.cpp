#include <iostream>
using namespace std;

int	is_prime(int nb)
{
	int	k; // divider

	k = 7;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb % 2 == 0)
		return (nb == 2);
	else if (nb % 3 == 0)
		return (nb == 3);
	else if (nb % 5 == 0)
		return (nb == 5);
	while (k * k <= nb) // mathematical equation
	{
		if (nb % k == 0)
			return (0); // if number divides by divider, it returns 0 so number is not prime
		k++;
	}
	return (1); // return 1 if number is prime
}

int main()
{
    int nb = 3;

    while (nb < 100)
    {
        if (is_prime(nb))
            cout << nb << " ";
        nb++;
    }
    return 0;
}