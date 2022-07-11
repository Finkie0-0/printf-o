#include "main.h"
#include <unistd.h>
/*FOR CHARACTERS && STRINGS */

/**
 * print_char - prints out a character.
 *
 * @c: character to be printed
 * Return: Always 1.
 */

int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_string - prints out the string.
 *
 * @s: string to be printed out.
 * Return: number of chars to be printed.
 */

int print_string(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}

/**
 * print_stringNon - prints a string with the nonprintable characters
 *
 * @s: the string that will be printed out
 *
 *Return: number of chars to be printed
 */

int print_stringNon(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += hex_printer(str[i]);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
