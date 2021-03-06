#include "header.h"

/**
 * main - prints the environment using the global variable environ
 * @ac: number of arguments
 * @av: pointers to the arguments
 * @env: NULL terminated array of strings
 * Return: 0 on success
 */

int main(int ac, char **av, char **env)
{
	int i;
	(void)ac;
	(void)av;
	(void)env;

	for (i = 0; environ[i] != NULL; i++)
		printf("%s\n", environ[i]);
	return (0);
}
