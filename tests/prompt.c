#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

int main()
{

	char *buffer;
	size_t bufsize = 0;

	_putchar('$');
	_putchar(' ');
	getline(&buffer, &bufsize, stdin);
	write(1, buffer, bufsize);

	free(buffer);

	return(0);
}
