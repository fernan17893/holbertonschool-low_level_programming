#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <unistd.h>

int main(__attribute__((unused))int ac, char **av)
{
	char **p = av;
	char *w = (" ");

	p++;
	while (*p != NULL)
	{
	write(1, *p, _strlen(*p));
	write(1, w, _strlen(w));
	p++;
	}
	putchar('\n');
	return (0);
}
