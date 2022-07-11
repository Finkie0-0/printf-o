#include "main.h"

/* FOR HEXADECIMAL  */

/**
 * print_hex - converts unsigned int to hexadecimal form.
 *
 * @n: unsigned int to be printed out.
 * @c: checks for uppercase letter.
 *
 * Return: number of digits printed.
 */

int print_hex(unsigned int n, unsigned int c)
{
	unsigned int arr[8];
	unsigned int x, y, sum;
	char diff;
	int counter;

	y = 268435456;
	if (c)
	{
		diff = 'A' - ':';
	}
	else
		diff = 'a' - ':';
	arr[0] = n / y;
	for (x = 1; x < 8; x++)
	{
		y /= 16;
		arr[x] = (n / y) % 16;
	}
	for (x = 0, sum = 0, counter = 0; x < 8; x++)
	{
		sum += arr[x];
		if (sum || x == 7)
		{
			if (arr[x] < 10)
			{
				_putchar('0' + arr[x]);
			}
			else
				_putchar('0' + diff + arr[x]);
			counter++;
		}
	}
	return (counter);
}

/**
 * _power - calculates an exponent.
 *
 * @n: the base of the exponent.
 * @x: exponent of a number.
 *
 * Return: n ^ x.
 */

unsigned long _power(unsigned int n, unsigned int x)
{
	unsigned int index;
	unsigned long result = n;

	for (index = 1; index < x; index++)
	{
		result *= n;
	}
	return (result);
}

/**
 * hex_printer - converts character ascii value to hex uppercase.
 *
 * @c: char to be converted.
 *
 * Return: Always 2.
 */

int hex_printer(char c)
{
	int counter;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (counter = 0; counter < 2; counter++)
	{
		if (d[counter] >= 10)
			_putchar('0' + diff + d[counter]);
		else
			_putchar('0' + d[counter]);
	}
	return (counter);
}
