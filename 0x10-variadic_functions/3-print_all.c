#include "variadic_functions.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - prints character
 * @ptr: pointer to variadic argument
 *
 * Return: void
 */

void print_char(va_list ptr)
{
	char store;

	store = va_arg(ptr, int);
	printf("%c", store);
}

/**
 * print_int - prints integer
 * @ptr: pointer to variadic argument
 *
 * Return: void
 */

void print_int(va_list ptr)
{
	int store;

	store = va_arg(ptr, int);
	printf("%d", store);
}

/**
 * print_float - prints float integer
 * @ptr: pointer to variadic argument
 *
 * Return: void
 */

void print_float(va_list ptr)
{
	double store;

	store = va_arg(ptr, double);
	printf("%f", store);
}

/**
 * print_string - prints string
 * @ptr: pointer to variadic argument
 *
 * Return: void
 */

void print_string(va_list ptr)
{
	char *store;

	store = va_arg(ptr, char *);
	if (store == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", store);
}

/**
 * print_all - variadic function thats prints any argument
 * @format: string that specifies which data type to use
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{

	va_list ptr;
	unsigned int count;
	int i;
	char *sep;

	type_t type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(ptr, format);

	sep = "";
	count = 0;

	while (format != NULL && *(format + count) != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (*(format + count) == *(type[i].data))
			{
				printf("%s", sep);
				type[i].f(ptr);
				sep = ", ";
			}
			i++;
		}
		count++;
	}
		printf("\n");
}
