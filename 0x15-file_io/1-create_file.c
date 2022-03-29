#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
*_strlen - Returns the lenght of a string
*@s: String being counted
*Return: string lenght
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
	len++;
	}

	return (len);
}


/**
* create_file- creates a file
* @filename: name of the file
* @text_content: string to write to the file
* Return: 1 if success, -1 if failure
*
*
*
*/

int create_file(const char *filename, char *text_content)
{

	int o, w;


	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o == -1)
		return (0);

	w = write(o, text_content, _strlen(text_content));
	if (w == -1)
		return (-1);


	close(o);
	return (1);
}
