#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * executes ls -l /tmp in 5 different child processes
 * Return: 0 on success
 */
int main(void)
{
	int i;
	pid_t pid;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 1; i <= 5; i++)
	{
		pid = fork();
		if (pid == -1)
			perror("Error:");
		if (pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error:");
		}
		else if ((pid > 0) && (i != 5))
			wait(NULL);
	}
	return (0);
}
