#include "header.h"

/**
 * supersimpleshell - a super simple shell
 */
void supersimpleshell(void)
{
	int status = 1;
	char *line;
	char **args;
	int i;

	while (status)
	{
		line = readline();
		args = split_string(line);

		for (i = 0; args[i] != NULL; i++)
			printf("%s", args[i]);
	}
	free(line);
	free(args);
}

/**
 * main - opens a super simple shell
 * Return: always 0
 */
int main(void)
{
	supersimpleshell();

	return (0);
}
