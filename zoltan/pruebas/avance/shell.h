#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>

int _putchar(char c);
char *_strdup(char *str);
void free_all(char **arr);
char *_getenv(char *words, char **environ);
int stat_func(char *command);
char **create_arr(char *str_g, char **env);
char **add_arr(char *str, char *command);
char *concatenate(char *args, char *path);
char **simple_arr(char *command, int words);

#endif
