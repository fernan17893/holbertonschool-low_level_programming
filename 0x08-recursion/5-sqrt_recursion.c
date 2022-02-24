#include "main.h"
/**
 * sqr_check- finds natural square root of a number
 * @n: number
 * @num: square root of number
 * Return: square root
 */

int sqr_check(int n, int num)
{
	if (num * num > n)
		return (-1);
	if (num * num == n)
		return (num);
	else
		return (sqr_check(n, num + 1));
}

/**
 * _sqrt_recursion- recursion function to find square root of n
 * @n: number
 * Return: natural square root
 *
 */

int _sqrt_recursion(int n)
{
	return (sqr_check(n, 1));
}
