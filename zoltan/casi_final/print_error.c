#include "shell.h"

/**
 * print_error - Print the error format.
 * @av: Contains the first argument.
 * @counter: General counter.
 * @command: contains the first commands
 */
void print_error(char *av, int counter, char *command)
{
	simple_print(av);
	write(STDOUT_FILENO, ": ", 2);
<<<<<<< HEAD
	_putchar(counter + '0');
=======
	print_number(counter);
>>>>>>> 9e43e8cac13aff0c4cefb30972cc0593de6bb05b
	write(STDOUT_FILENO, ": ", 2);
	simple_print(command);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "not found", 9);
	_putchar('\n');
}

/**
 * simple_print - Print strings whit _putchar.
 * @str: String to print.
 */
void simple_print(char *str)
{
	int count = 0;

	while (str[count] && str[count] != ' ' && str[count] != '\n')
	{
		_putchar(str[count]);
		count++;
	}
}
<<<<<<< HEAD
=======

/**
 * print_number - Print a number.
 * @number: number
 */
void print_number(long int number)
{
	if (number < 10)
	{
	}
	else
	{
		print_number(number / 10);
	}
	number %= 10;
	_putchar(number + '0');
}
>>>>>>> 9e43e8cac13aff0c4cefb30972cc0593de6bb05b
