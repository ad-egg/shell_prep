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
	char *nline = "\n";

	write(STDOUT_FILENO, nline, 1);
	write(STDOUT_FILENO, prompt, 2);
	getline(&buffer, &buffer_size, stdin);
	return (buffer);
}
