#include "main.h"

/**
* cap_string- Capitalizes all words in a string
* @p: pointer to string
* Return: string
*
*/

char *cap_string(char *p)
{

	int i = 0;

	for (i = 0; p[i] != '\0'; i++)
	{


	if (p[i] >= 'a' && p[i] <= 'z')
	{
	if ((p[i - 1] >= 0 && p[i - 1] <= 47) || (p[i - 1] >= 58 && p[i - 1] <= 63))
	{
		if (!(p[i - 1] == 45))
		{
			p[i] = p[i] - 32;
		}
	}

	else if (p[i - 1] >= 123 || p[i - 1] == 125)
	{
		p[i] = p[i] - 32;
	}
	}
	}
	return (p);
}
