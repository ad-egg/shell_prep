#include <string.h>
#include <stdio.h>

/**
 * main - splits a string
 * Return: Always 0
 */
int main(void)
{
	char str[] = "The world is quiet here.";

	char *token = strtok(str, " ");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
