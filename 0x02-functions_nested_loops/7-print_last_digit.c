#include "main.h"

/**
* print_last_digit -prints last digit of a number
* Return: gcd is the last digit of a number
* @n: number
*/

int print_last_digit(int n)
{

	int gcd;

	if (n > 0)
	{
	gcd = n % 10;
	_putchar(gcd + '0');
	return (gcd);
	}
	else
	{

	gcd = -n % 10;
	_putchar(gcd + '0');
	return (gcd);
	}
}
