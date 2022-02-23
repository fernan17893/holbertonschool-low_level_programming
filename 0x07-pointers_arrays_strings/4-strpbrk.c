#include "main.h"

/**
* *_strpbrk- searches string for occurence of bytes
* @s: string 1
* @accept: string 2
* Return: matching bytes or NULL if no bytes found
*
*/

char *_strpbrk(char *s, char *accept)
{

	int i, a, pos, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	pos = i;
	for (i = 0; accept[i] != '\0'; i++)
{
	for (a = 0; accept[a] != '\0'; a++)
{
	if (accept[i] == s[a])
	{
	if (a <= pos)
	{
		pos = a;
		flag = 1;
	}
	}
}
}
	if (flag == 1)
	{
	return (&s[pos]);
	}
	else
	{
	return (0);
	}
}
