#include "main.h"
#include <stdio.h>

/**
* main- prints program name
* @argc: count of arguments sent to command line
* @argv: string of arguments sent to the command line
* Return: 0
*
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
{
	printf("%s", argv[i]);
}

	printf("\n");

	return (0);
}
