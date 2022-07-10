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
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}

/**
 * print_unsigned_int -prints out binary number from unsigned integer
 *
 * @b: unsigned integer to be printed out.
 *
 * Return: number of digits printed.
 */
int print_unsigned_int(va_list b)
{
	unsigned int x, y, z, sum;
	unsigned int arr[32];
	int count;

	x = va_arg(b, unsigned int);
	y = 2147483648;
	arr[0] = x / y;
	for (z = 1; z < 32; z++)
	{
		y /= 2;
		arr[z] = (x / y) % 2;
	}
	for (z = 0, sum = 0, count = 0; z < 32; z++)
	{
		sum += arr[z];
		if (sum || z == 31)
		{
			_putchar('0' + arr[z]);
			count++;
		}
	}
	return (count);
}

