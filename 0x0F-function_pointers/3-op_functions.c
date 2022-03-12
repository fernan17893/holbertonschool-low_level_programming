#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 *op_add- adds two integers
 * @a: integer 1
 * @b: integer 2
 * Return: addition
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
* op_sub- subtracts two integers
* @a: integer 1
* @b: integer 2
* Return: subtraction
*/

int op_sub(int a, int b)
{
	return (a - b);
}


/**
* op_mul- multiplies two integers
* @a: integer 1
* @b: integer 2
* Return: multiplication
*/

int op_mul(int a, int b)
{
	return (a * b);
}


/**
* op_div- division of two integers
* @a: integer 1
* @b: integer 2
* Return: division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod- modular division of two integers
* @a: integer 1
* @b: integer 2
* Return: modular
*/
int op_mod(int a, int b)
{
	if (b == 0)
		printf("Error\n");
	exit(100);
	return (a % b);
}
