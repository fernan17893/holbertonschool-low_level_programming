#include <stdio.h>

/**
*
*
*
*
*/

int main(void)
{

	long a;
	long num = 612852475143;
	

	for (a = 2; a < num; a++)
	{
	if (num % a == 0)
	num /= a;
	}

	printf("%li\n", num);

	return (0);
}
