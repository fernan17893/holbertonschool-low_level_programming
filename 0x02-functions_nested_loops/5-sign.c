#include "main.h"
/**
* print_sign - checks for alphabetic character
* Return: is 1 if n is greater than 0, 0 if equal to zero, - if less than
* @n: Character being checked
*/


int print_sign(int n)
{

	if (n > 0)
{
	_putchar('+');

	return (1);
	}
	else if (n == 0)
{
	_putchar('0');

	return (0);
	}
	else
{
	_putchar('-');

	return (-1);
	}
}
