#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* append_text_to_file- appends text at the end of a file
* @filename: name of the file
* @text_content: string to add to the file.
* Return: 1 if succesful, -1 if failure
*/

int append_text_to_file(const char *filename, char *text_content)
{

	int o, w, len = 0;

	if (filename == NULL)
		return (-1);


	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
			;
		}
	}

	o = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	w = write(o, text_content, len);
		if (o == -1 || w == -1)
			return (-1);

		close(o);
			return (1);
}
