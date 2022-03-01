#include "main.h"
#include <stdio.h>

/**
* main- prints number of arguments
* @argc: count of arguments passed to command line
* @argv: values passed to the command line
* Return: 0
*/



int main(int argc, char *argv[])
{


	(void) argv;

	{
	printf("%d\n", argc - 1);
	}


	return (0);
}
