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

/**
 * print_addr - prints out an address.
 *
 * @p: address to be printed.
 *
 * Return: number of characters to print.
 */

int print_addr(va_list p)
{
	int counter = 0;
	unsigned int arr[16];
	unsigned int x, sum;
	unsigned long y, z;
	char *str = "(nil)";

	y = va_arg(p, unsigned long);
	if (y == 0)
	{
		for (x = 0; str[x]; x++)
		{
			_putchar(str[x]);
			counter++;
		}
		return (counter);
	}
	_putchar('0');
	_putchar('x');
	counter = 2;
	z = _power(16, 15);
	arr[0] = y / z;
	for (x = 1; x < 16; x++)
	{
		z /= 16;
		arr[x] = (y / z) % 16;
	}
	for (x = 0, sum = 0; x < 16; x++)
	{
		sum += arr[x];
		if (sum || x == 15)
		{
			if (arr[x] < 10)
				_putchar('0' + arr[x]);
			else
				_putchar('0' + ('a' - ':') + arr[x]);
			counter++;
		}
	}
	return (counter);
}
