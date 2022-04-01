#include "main.h"
#include <stdio.h>
/**
* main- copies content to another file
* @ac: argument count
* @av: pointer to pointer
* Return: 0
*/
int main(int ac, char **av)
{
	int fd1, fd2, letters = 1, written, close1, close2;
	char *buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_form file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	while (letters > 0)
	{
		letters = read(fd1, buffer, 1024);
		if (fd1 == -1 || letters == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		written = write(fd2, buffer, letters);
		if (fd2 == -1 || written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	close1 = close(fd1);
	close2 = close(fd2);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd1);
		exit(100);
	}
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	}
	return (0);
}
