#include "header.h"

/**
 * readline - prints a prompt, then getline from standard input
 * Return: pointer to an array
 */
char *readline(void)
{
	char *buffer = NULL;
	size_t buffer_size;
	char *prompt = "$ ";
	int i;

	write(STDOUT_FILENO, prompt, 2);
	getline(&buffer, &buffer_size, stdin);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		if (buffer[i - 1] == '\n')
			buffer[i - 1] = '\0';
	}
	return (buffer);
}
