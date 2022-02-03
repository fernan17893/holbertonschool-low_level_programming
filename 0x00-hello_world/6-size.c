#include <stdio.h>

/**
*main-here we will print the size of the system types
*Return: 0
*/
int main(void)
{
/**
*char charType; is the value of the char variable
*int iintType; is the value of the int variable
*long int longintType is the value of the long int variable
*long long int longlongintType is the value of that variable
*float floatType is the value of float
*/
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

/**
* sizeof(charType) evaluate shows the size of each variable computed"
*/
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

return (0);
}
