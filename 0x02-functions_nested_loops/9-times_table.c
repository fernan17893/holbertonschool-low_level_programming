#include "main.h"
/**
* times_table- shows multiples of 9
* @a- 9
* @b- 9
* @num- multiplication of a and b
*/

void times_table(void)
	

{
	int a;
	int b;
	int num;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0 ; b <= 9; b++)
	{
	num = (a * b);

	 if (b != 0)
		{
		  _putchar(',');
        	 _putchar(' ');
		}

	if (num >= 10)
		{
		_putchar ((num / 10) + '0');
		_putchar((num % 10) + '0');
		}

	else if(num < 10 && b != 0)
		{
		_putchar(' ');
		_putchar((num + '0'));
		}
	else 
		{
		_putchar((num % 10) + '0');
		}
	}
	_putchar('\n');
	}
}
