#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Reads a text file and prints to POSIX output
* @filename: Pointer to file
* @letters: letters function is printing
* Return: text file output and number of letters
*
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;
	ssize_t r, o, w;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (r == -1 || w == -1 || o == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);

}
