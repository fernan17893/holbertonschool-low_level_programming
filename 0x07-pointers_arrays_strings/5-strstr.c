#include "main.h"

/**
* _strstr- finds first occurence of a substring
* @haystack: string
* @needle: substring
* Return: beggining of located substring
*/

char *_strstr(char *haystack, char *needle)
{

	int i, a, p;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (a = 0; needle[a]; a++)
			{
				if (haystack[i + a] == needle[a])
					p = 1;
				else
					p = 0;
			}
		}
	if (p == 1)
		return (haystack + i);
	}
	if (*needle == '\0')
		return (haystack);
	else
		return (0);
}	
