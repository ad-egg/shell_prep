#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - prints a dollar sign with a space, waits for user to enter command,
 * then prints it on the next line
 * Return: always 0
 */
int main(void)
{
	char *buffer = NULL;
	size_t buffer_size;

	printf("$ ");
	getline(&buffer, &buffer_size, stdin);
	printf("%s", buffer);
	free(buffer);
	/* free the buffer because getline automatically malloc or realloc
	 * for the perfect amount of space */
	exit(EXIT_SUCCESS);
	return (0);
}
