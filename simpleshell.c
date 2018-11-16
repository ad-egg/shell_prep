#include "header.h"

/**
 * main - a simple shell
 */
int main(void)
{
	int status, i;
	char *line, **args;
	char *nocommand = ": command not found";

	status = 1;

	/* get PATH, strtok it */

	while(status)
	{
		line = readline();
		/* prints prompt and get the line, should prob handle EOF in this func */
		args = split_string(line);
		/* splits user input line into string of strings */

		/* iterate through struct of builtins for match args[0] */
		/* if find, function pointer to function, also store y/n in integer */
		/* look through strtok'd PATH for match */
		/* if find, summon_child to execve, also store y/n in integer */

		/* if didnt match builtin && didn't find in PATH */
		{
			for (i = 0; args[0][i] != '\0'; i++)
				;
			write(STDOUT_FILENO, args[0], i);
			write(STDOUT_FILENO, nocommand, 19);
		}
		free(line);
		free(args);
	}
	return (0);
}
