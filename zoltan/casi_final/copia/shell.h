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
int stat_func(char *command);
int check_exit(char *string);
void simple_print(char *str);
char **absolute_path(char *args);
void print_number(long int number);
int _merge(char *args, char **env);
char **add_arr(char *str, char *command);
char *concatenate(char *args, char *path);
char *_getenv(char *words, char **environ);
char **simple_arr(char *command, int words);
int print_env(char *string, char **environ);
void print_error(char *av, int counter, char *command);
char **create_arr(char *str_g, char **env, char *av, int counter);

#endif
