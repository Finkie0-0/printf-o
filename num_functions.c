#include "main.h"
#include <unistd.h>

/**
 * print_unsigned_decimal - prints out the unsigned decimal
 * @u: unsigned decimal number to be printed out.
 *
 * Return: number of characters printed
 */

int print_unsigneddec(va_list u)
{
	unsigned int x, y, z, sum;
	unsigned int arr[10];
	int counter;

	x = va_arg(u, unsigned int);
	y = 2147483648;
	arr[0] = x / y;
	for (z = 1; z < 10; z++)
	{
		y /= 2;
		arr[z] = (x / y) % 2;
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
 * print_oct - prints octal number
 * @o - octal to print out
 *
 * Return: Number of octal char printed
 */
int print_octal(va_list o)
{
	int arr[12];
	int x, y, z, sum;
	int counter;

	z = va_arg(o, int);
	counter = 0;
	y = 10000000000;
	arr[0] = z / y;
	for (x = 1; x < 12; x++)
	{
		y /= 12;
		arr[x] = (z / y) % 12;
	}
	if (z < 0)
	{
		_putchar('-');
		counter++;
		
	}
	for (x = 0, sum = 0; x < 12; x++)
	{
		sum += arr[x];
		if (sum != 0 || x == 9)
		{
			_putchar('0' + arr[x]);
			counter++;
		}
	}
	return (counter);
}


