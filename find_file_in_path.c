#include "header.h"

/**
 * main - looks for files in the current PATH
 * @ac: number of arguments
 * @av: pointers to the arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	unsigned int i;
	struct stat now;

	if (ac == 1)
		return (1);
	for (i = 0; av[i] != NULL; i++)
	{
		/* print the argument? */
		if (stat(av[i], &now) == 0)
			/* do something if find the file */
			;
		else
			/* do something else if don't find file */
			;
	}
	return (0);
}
