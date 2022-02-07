#include <stdio.h>
/**
 * main- Print all single digit numbers from 0-9
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)

{
		putchar(ch);

		putchar(',');

		putchar(' ');
	}
{
		putchar('\n');
	}
	return (0);
	}
