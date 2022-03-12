#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings- function that prints strings
* @separator: string to be printed
* @n: number of strings passed to the function
* @...: amount
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list str;
	unsigned int i;
	char *var;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		var = va_arg(str, char *);
		if (var == NULL)
			printf("(nil)");

		else
			printf("%s", var);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(str);
}
