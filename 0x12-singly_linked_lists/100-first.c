#include <stdio.h>

void __attribute__((constructor)) after(void);

/**
* after- prints string before main function
*
*
*/

void after(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
