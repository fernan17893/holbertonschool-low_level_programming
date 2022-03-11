
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * op_add- adds operatives
 * op_sub- subtracts operatives
 * op_mul- multiplies operatives
 * op_div- divides operatives
 * op_mod- modular of operatives
 * @a: operative 1
 * @b: operative 2
 * Return: result of operations
 */



int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
		printf("Error\n");
	exit(100);
	return (a % b);
}
