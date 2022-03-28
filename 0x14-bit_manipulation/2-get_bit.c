#include "main.h"
#include <stdio.h>

/**
* get_bit- returns value of bit at given index
* @n: number
* @index: given position
* Return: value of bit, -1 if error
*
*
*/

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);

}
