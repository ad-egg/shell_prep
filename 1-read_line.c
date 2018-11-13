#include "header.h"

/**
 * main - prints a dollar sign with a space, waits for user to enter command,
 * then prints it on the next line
 * Return: always 0
 */
int main(void)
{
	char *buffer = NULL;
	size_t buffer_size;
	char *str = "$ ";

	write(STDOUT_FILENO, str, 2);
	getline(&buffer, &buffer_size, stdin);
	write(STDOUT_FILENO, buffer, buffer_size);
	free(buffer);
	/* free the buffer because getline automatically malloc or realloc
	 * for the perfect amount of space */
	exit(EXIT_SUCCESS);
	return (0);
}
