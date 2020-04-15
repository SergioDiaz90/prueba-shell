#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>

char **add_arr(char *str, char *command);
int _putchar(char c);
void first_func(void);
char *concatenate(char *str_g, char *path);
int stat_func(char *command);
char **create_arr(char *str_g);
char *_getenv(char *words);
void print_env(char *string, char env[]);

#endif
