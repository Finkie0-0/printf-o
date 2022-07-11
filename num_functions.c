#include "main.h"

/**
 * print_unsigned_decimal - prints out the unsigned decimal
 * @u: unsigned decimal number to be printed out.
 *
 * Return: number of characters printed
 */

int print_unsigned_decimal(va_list u)
{
	unsigned int x, y, z, sum;
	unsigned int arr[10];
	int counter;

	x = va_arg(u, unsigned int);
	y = 1000000000;
	arr[0] = x / y;
	for (z = 1; z < 10; z++)
	{
		y /= 10;
		arr[z] = (x / y) % 10;
	}
	for (z = 0, sum = 0, counter = 0; z < 10; z++)
	{
		sum += arr[z];
		if (sum || z == 9)
		{
			_putchar('0' + arr[z]);
			counter++;
		}
	}
	return (counter);
}

/**
 * print_octal- prints octal number
 * @o: octal to print out
 *
 * Return: Number of octal char printed
 */
int print_octal(va_list o)
{
	unsigned int arr[11];
	unsigned int x, y, z, sum;
	int counter;

	z = va_arg(o, unsigned int);
	y = 1073741824;
	arr[0] = z / y;
	for (x = 1; x < 11; x++)
	{
		y /= 8;
		arr[x] = (z / y) % 8;
	}
	for (x = 0, sum = 0, counter = 0; x < 11; x++)
	{
		sum += arr[x];
		if (sum || x == 10)
		{
			_putchar('0' + arr[x]);
			counter++;
		}
	}
	return (counter);
}
