#include "main.h"

/**
 * _puts - prints a string.
 *
 * @str: a pointer to the string.
 * @ascii: ascii number to the corresponding character.
 *
 * Return: sum to the required string character.
 */

int _puts(char *str, int ascii)
{
	char *s;
	int i = 0;
	int sum = 0;

	while (str[i])
	{
		if (((str[i] >= 0 && str[i] < 32) || str[i] >= 127) && ascii)
		{
			s = convert_base(str[i], 16, 1);
			sum += write(1, "\\x", 2);
			if (str[i] >= 0 && str[i] < 16)
				sum += _putchar('0');
			sum += _puts(s, 0);
			free(s);
			i++;
		}
		else
		{
			sum += _putchar(str[i]);
			i++;
		}
	}
	return (sum);
}
