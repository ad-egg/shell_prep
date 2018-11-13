#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFERSIZE 1024

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory block
 * @old_size: allocated space for ptr
 * @new_size: reallocated space for ptr
 * Return: pointer to reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; (i < old_size) && (i < new_size); i++)
			newptr[i] = ((char *)ptr)[i];
		free(ptr);
	}
	return (newptr);
}

/**
 * split_line - splits a string
 * @line: string to be split
 * Return: pointer to array of arrays
 */
char **split_string(char *line)
{
	char **tokens, *token;
	int i, buffsize;

	tokens = malloc(sizeof(char) * buffsize);
	if (tokens == NULL)
		return (NULL);
	token = strtok(line, " ");
	for (i = 0; token != NULL; i++)
	{
		tokens[i] = token;
		if (i >= buffsize)
		{
			buffsize += BUFFERSIZE;
			tokens = _realloc(tokens, sizeof(char) * buffsize);
		}
		token = strtok(NULL, " ");
	}
	tokens[i] = NULL;
}
