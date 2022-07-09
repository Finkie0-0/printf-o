#include "main.h"
#include <unistd.h>

/**
 * print_char - prints out a character.
 *
 * @arg_ptr: pointer to the arguments list.
 * Return: number of printed char.
 */

int print_char(va_list args_ptr)
{
	char c = va_arg(args_ptr, int);

	if (c == '\0')
		return (write(1, &c, 1));
	_putchar(c);
	return (1);
}


/**
 * print_string - prints out the string.
 *
 * @arg_ptr: pointer to the arguments list.
 * Return: string and arguments.
 */

int print_string(va_list args_ptr)
{
	char *args = va_arg(args_ptr, char *);

	int sum = 0;
	if (!args)
	{
		sum += _puts("(null)", 0);
		return (sum);
	}
	return (_puts(args, 0));
}
