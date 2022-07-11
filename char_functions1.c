#include "main.h"

/* FOR HEXADECIMAL  */

/**
 * print_unsignedintx - prints out lowercase hexadecimal from unsigned int.
 *
 * @x: unsigned int to be printed.
 *
 * Return: number of digits to be printed.
 */

int print_unsignedintx(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * print_unsignedintX - prints out uppercase hexadecimal from unsigned int.
 *
 * @X: unsigned int to be printed.
 *
 * Return: number of digits to be printed.
 */

int print_unsignedintX(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}

