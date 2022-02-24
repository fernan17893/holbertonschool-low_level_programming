#include "main.h"

/**
* is_prime_number- shows if a number is a prime number
* @n: number
* Return: 1 if number is prime otherwise returns 0
*
*/

int is_prime_number(int n)
{


	if (n < 0)
	return (0);

	else if ((n % 2 != 0) && (n / 3 != 0) && (n % 5 != 0))
	return (1);

	else
	return (0);
}

