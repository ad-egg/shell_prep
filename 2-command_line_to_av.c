#include <string.h>
#include <stdio.h>

/**
 * main - splits a string
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *token;

	if (argc == 1)
		return (0);
	token = strtok(*argv, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
