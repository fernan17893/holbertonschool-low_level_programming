#include "main.h"

/**
* rev_string- reverses string 
* @s: string
*
*
*/

void rev_string(char *s)

{
	int x;
	int j=10;

	for (x=0; x < j; x++)
{
	char tmp = s[x];
	s[x] = s[j-1-x];
	s[j-1-x] = tmp;
}
}
