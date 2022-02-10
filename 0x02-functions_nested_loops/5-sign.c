#include "main.h"
/**
* _isalpha - checks for alphabetic character
*  Return: is 1 if alphabetic character, 0 otherwise
* @c:Character being checked
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
