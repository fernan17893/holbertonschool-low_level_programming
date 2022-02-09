#include "main.h"
/**
* _isalpha - checks for alphabetic character
*  Return: is 1 if alphabetic character, 0 otherwise
* @c:Character being checked
*/


int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

	return (1);

	else

	return (0);
}
