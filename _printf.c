#include "main.h"

/**
 * _printf - produces output according to a format.
 *
 * @format: is the character string. The format string is composed of zero
 * or more directives.
 * Return: number of characters printed (excluding the null byte used to end
 * output strings).
 */

int _printf(const char *format, ...)
{
	va_list args_ptr;
	int counter = 0;
	int i = 0;
	int (*func)();

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args_ptr, format);
	do {
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				func = get_char_func(format[i + 1]);
			if (func == NULL)
			{
				_putchar(format[i]);
				counter++;
				i++;
			}
			else
			{
				counter += func(args_ptr);
				i += 2;
				continue;
			}
		}
		else
		{
			_putchar(format[i]);
			counter++;
			i++;
		}
	} while (format[i]);
	va_end(args_ptr);
	return (counter);
}

