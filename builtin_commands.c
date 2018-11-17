#include "header.h"

/**
 * builtin_commands - finds if a string matches a builtin command
 * @str: string to be compared
 * Return: 0 if found match, 1 if no match
 */
int builtin_commands(char *str)
{
	char *leave, *flora;
	int i, n;

	leave = "exit";
	flora = "env";

	if (_strcmp(leave, str) == 0)
		return (0);
	else if (_strcmp(flora, str) == 0)
	{
		for (i = 0; environ[i] != NULL; i++)
		{
			for (n = 0; environ[i][n] != '\0'; n++)
				write(STDOUT_FILENO, environ[i], n);
		}
		return (0);
	}
	else
		return (1);
}

