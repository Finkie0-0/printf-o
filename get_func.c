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
		{"d", print_dol},
		{"i", print_int},
		{"b", print_unsigned_int},
		{"u", print_unsigned_decimal},
		{"o", print_octal},
		{"x", print_unsignedintx},
		{"X", print_unsignedintX},
		{"S", print_stringNon},
		{"p", print_addr},
	};

	int i;

	for (i = 0; cp[i].c != NULL; i++)
	{
		if (*(cp[i].c) == *format)
			break;
	}

	return (cp[i].f);
}
