#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints the environment using the global variable environ
 * @ac: number of arguments
 * @av: pointers to the arguments
 * @env: NULL terminated array of strings
 * Return: 0 on success
 */

extern char **environ;

int main(int ac, char **av, char **env)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		printf("%s\n", env[i]);
	}
	return (0);
}
