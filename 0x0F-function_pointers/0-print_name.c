#include "function_pointers.h"
#include <stdio.h>

/**
* print_name- prints name
* @name: pointer to name char
*@f: pointer to function
*@*: pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);


}
