#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{

	int store, status;
	char *buffer;
	size_t bufsize = 0;
	pid_t pid;


	_putchar('$');
	_putchar(' ');
	write(1, "shelly ", 9);
	getline(&buffer, &bufsize, stdin);

	pid = fork();

	if (pid == -1)
	{
		return (-1);
	}

	if (pid == 0)
	{

		store = execve(buffer[0], buffer, NULL);
		if (store == -1)
		{
			return (-1);
		}
	}
	else
	{
		wait(&status);
	}

	free(buffer);

	return (0);
}
