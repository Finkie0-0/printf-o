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

/* FOR NUMBERS && DIGITS */

/**
 * print_int - prints out an integer.
 *
 * @i: integer to be printed out.
 *
 * Return: number of characters and digits printed out.
 */

int print_int(va_list i)
{
	int arr[10];
	int x, y, z, sum, counter;

	z = va_arg(i, int);
	counter = 0;
	y = 1000000000;
	arr[0] = z / y;
	for (x = 1; x < 10; x++)
	{
		y /= 10;
		arr[x] = (z / y) % 10;
	}
	if (z < 0)
	{
		_putchar('-');
		counter++;
		for (x = 0; x < 10; x++)
			arr[x] *= -1;
	}
	for (x = 0, sum = 0; x < 10; x++)
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

/**
 * print_dol - prints out a decimal/ double.
 *
 * @d: decimal to be printed out.
 *
 * Return: number of characters and digits to be printed
 */

int print_dol(va_list d)
{
	int arr[10];
	int x, y, z, sum, counter;

	z = va_arg(d, int);
	counter = 0;
	y = 1000000000;
	arr[0] = z / y;
	for (x = 1; x < 10; x++)
	{
		y /= 10;
		arr[x] = (z / y) % 10;
	}
	if (z < 0)
	{
		_putchar('-');
		counter++;
		for (x = 0; x < 10; x++)
			arr[x] *= -1;
	}
	for (x = 0, sum = 0; x < 10; x++)
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

/**
 * print_unsigned_int - prints out a binary number from unsigned integer
 * @b: unsigned int to be printed out
 *
 * Return: number of digits printed
 */

int print_unsigned_int(va_list b)
{
	unsigned int x, y, z, sum;
	unsigned int arr[32];
	int counter;

	x = va_arg(b, unsigned int);
	y = 2147483648;
	arr[0] = x / y;
	for (z = 1; z < 32; z++)
	{
		y /= 2;
		arr[z] = (x / y) % 2;
	}
	for (z = 0, sum = 0, counter = 0; z < 32; z++)
	{
		sum += arr[z];
		if (sum || z == 31)
		{
			_putchar('0' + arr[z]);
			counter++;
		}
	}
	return (counter);
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
