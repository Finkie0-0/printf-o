#include "main.h"
#include <unistd.h>
/*FOR CHARACTERS && STRINGS */

/**
 * print_char - prints out a character.
 *
 * @arg_ptr: pointer to the arguments list.
 * Return: number of printed char.
 */

int print_char(va_list c)
{
	char ch = (char) va_arg(c,int);
	_putchar(ch);
	return (1);
}


/**
 * print_string - prints out the string.
 *
 * @arg_ptr: pointer to the arguments list.
 * Return: string and arguments.
 */

int print_string(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count];count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
