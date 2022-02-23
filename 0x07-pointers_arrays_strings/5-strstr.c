#include "main.h"

/**
*
*
*
*
*/

char *_strstr(char *haystack, char *needle)
{

	int i, a;

	for (i = 0; haystack[i] != '\0'; i++)
{	
	for (a = 0; needle[a] != '\0'; a++)
{
	if (haystack[i + a] != needle[a])
	break;

	if (a == (a + 1))
	{
	return (needle);
	}
}
}
	return ('\0');	
}	
