#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>

extern char **environ;

char *readline(void);
char **split_string(char *line);
int _strcmp(char *s1, char *s2);
void freedom(char **arrarray, char *str);
#endif
