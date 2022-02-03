#include <stdio.h>

int main(void)
{
/**
* main-here we will print the syze of the system types
* Return: 0
*/

char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

/** 
* sizeof will evaluate each variable computed"
*/

printf("Size of char: %zu byte(s))\n", sizeof(charType));
printf("Size of int: %zu byte(s)\n", sizeof(intType));
printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of float: %zu byte(s)\n", sizeof(floatType));

return (0);
}
