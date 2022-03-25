#include "main.h"
#include <stdio.h>

/**
*
*
*
*
*
*
*/

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned int val;

	val = (((n >> index) & 1));

	return (val);
}


