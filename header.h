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
#include <dirent.h>

extern char **environ;

int builtin_commands(char *str);
char *getpath(void);
void print_wd(void);
char *_getenv(const char *name);
char *find_env_var(char *s1, char *s2);
char *readline(void);
char **split_string(char *line, char *delim);
int _strcmp(char *s1, char *s2);
void freedom(char **arrarray, char *str);
#endif
