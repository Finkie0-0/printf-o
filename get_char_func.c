#include "main.h"

/**
 * get_char_func - selects correct char inputted as arg in the _printf funct.
 *
 * @format: pointer to the c format passed as an argument to the funcion.
 *
 * Return: pointer to the character passed as an arg.
 */

int (*get_char_func(const char *format))(va_list)
{
	character_args_t cp[] = {
		{"c", print_char},
		{"s", print_string},
	};

	int i = 0;

	do {
		if (*format == *(cp[i].c))
			return (cp[i].f);
		i++;
	} while (i < 2);
	return (cp[i].f);

}
