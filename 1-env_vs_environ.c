#include "header.h"

/**
 * main - prints address of env and environ
 * @ac: number of arguments
 * @av: pointers to arguments
 * @env: points to NULL terminated array
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	int i;
	(void)ac;
	(void)av;

	for (i = 0; environ[i] != NULL; i++)
		printf("environ[%i]: %s\n", i, environ[i]);
	printf("\n");
	for (i = 0; env[i] != NULL; i++)
		printf("env[%i]: %s\n", i, env[i]);
	return (0);
}
