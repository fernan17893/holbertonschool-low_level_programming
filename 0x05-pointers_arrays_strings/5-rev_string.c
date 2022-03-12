#include "main.h"

/**
* rev_string- reverses string 
* @s: string
*
*
*/

void rev_string(char *s)

{
	int len = 0;
	int i;
	char tmp;

	while (s[len] != '\0')
	{
	len++;
	}

	for (i = 0; i < len - 1; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = tmp;
		
		len--;
	}
}
