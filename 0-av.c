#include <unistd.h>
#include <stdlib.h>

/**
 * main - prints all arguments without using ac
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) ac, char **av)
{
	int i, n;
	char *str = " ";
	char *newline = "\n";

	for (i = 0; av[i] != NULL; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
			;
		write(STDOUT_FILENO, av[i], n);
		write(STDOUT_FILENO, str, 1);
	}
	write(STDOUT_FILENO, newline, 1);
	return (0);
}
