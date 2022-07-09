#include "main.h"

/**
 * convert_alpha_numeric - converts digits to char.
 *
 * @number: integer of an input number or digit.
 * @upper: uppercase checker.
 *
 * Return: converted value.
 */

int convert_alpha_numeric(int number, int upper)
{
	if (number >= 10)
		return (number - 10 + ((upper) ? 'A' : 'a'));
	else
		return (number + '0');
}

/**
 * convert_base - convert unsigned from base 10 to base.
 *
 * @number: decimal number.
 * @base: base to convert from.
 * @upper: uppercase checker
 *
 * Return: string converted from number.
 */

char *convert_base(unsigned long number, unsigned int base, int upper)
{
	int i = 0;
	char *str;
	unsigned long nbr = number;

	do {
		nbr /= base;
		i++;
	} while (nbr >= base);

	str = malloc(sizeof(char) * i + 2);
	if (!str)
		return (0);
	str[i + 1] = '\0';

	do {
		nbr = number % base;
		str[i] = convert_alpha_numeric(nbr, upper);
		number /= base;
		i--;
	} while (i >= 0);
	return (str);
}
