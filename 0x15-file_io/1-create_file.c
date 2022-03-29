#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
* create_file- creates a file
* @filename: name of the file
* @text_content: string to write to the file
* Return: 1 if success, -1 if failure
*
*/

int create_file(const char *filename, char *text_content)
{

	int o, w, len;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o == -1)
	return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			;
		}
	}		
	w = write(o, text_content, len);
		if (w == -1)
		return (-1);

		close(o);
		return (1);
}
