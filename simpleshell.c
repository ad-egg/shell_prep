#include "header.h"

/**
 * main - a simple shell
 * Return: 0 on success, 1 on any failure
 */
int main(void)
{
	int status = 1, n, i;
	char *line = NULL, **args = NULL,
	*sp = " ", *sep = ":", *bath = NULL, 
	**tiles = NULL, **bricks = NULL, *eq = "=", *comp = NULL,
	*leave = "exit", *flora = "env", *prwd = "pwd";
	DIR *dir;
	struct dirent *page;

	bath = getpath();/* got PATH */
	bricks = split_string(bath, eq);/* splits PATH from rest of string */
	tiles = split_string(bricks[1], sep);/* strtok the PATH directories */

	while (status)
	{
		if (args != NULL)
			free(args);
		if (line != NULL)
			free(line);
		line = readline();
	/* prints prompt and get the line, should prob handle EOF in this func */
		args = split_string(line, sp);
		/* splits user input line into string of strings */
		comp = args[0];
		if (_strcmp(leave, comp) == 0)
			return (0);
		else if (_strcmp(flora, comp) == 0)
		{
			print_curr_env();
			continue;
		}
		else if (_strcmp(prwd, comp) == 0)
		{
			print_wd();
			continue;
		}
		for (n = 0; tiles[n] != NULL; n++)
		{
/*
use concatenate to append comp to tiles[n] and then try to do the thing

*/			dir = opendir(tiles[n]);
			if (dir != NULL)
			{
				page = readdir(dir);
			}
			closedir(dir);
		}
		if (tiles[n] == NULL)
			printerror(comp);
		free(args);
		free(line);
	}
	if (tiles != NULL)
		free(tiles);
	if (bath != NULL)
		free(bath);
	return (0);
}
