#include "main.h"
#include <stdio.h>

/**
* main- prints all arguments it receieves
* @argc: count of arguments passed to the command line
* @argv: string of arguments passed
* Return: void
*/


int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
