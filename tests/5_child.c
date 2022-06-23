#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
*
*
*
*
*
*/

int main(void)
{

	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int i;

	for(i= 0; i <5; i++)
	{
		if(fork() == 0)
		{
		if (execve(argv[0], argv, NULL) == -1)
			{
			perror("Error:");
			}
		}
	}
	for(i =0; i<5; i++)
	wait(NULL);
	return (0);
}
