#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char *av[])
{

	char str [] = "Let's break this string into pieces";

	char *piece = strtok(str, " ");
	while (piece != NULL)
	{
		
		piece = strtok(NULL, " ");	
	}

	return 0;
}
