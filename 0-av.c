#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments without using ac
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) ac, char **av)
{
	int i;

	for (i = 0; av[i] != NULL; i++)
		printf("%s\n", av[i]);
	return (0);
}
