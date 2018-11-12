#include <string.h>
#include <stdio.h>

/**
 * main - splits a string
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *token;
	int i;

	if (argc == 1)
		return (0);

	for (i = 1; argv[i] != NULL; i++)
	{
		token = strtok(argv[i], " ");
		printf("%s\n", token);
	}
	return (0);
}
