#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct character_args - Struct character_args.
 *
 * @c: the pointer to the character that is to be checked.
 * @f: the function associated.
 */
/* Type def structure */

typedef struct character_args
{
	char *c;
	int (*f)(va_list);
} character_args_t;

/* PROTOTYPES  */

/*characters and string printing */

int _putchar(char c);

int _puts(char *str, int ascii );

/* converting prototypes */

int convert_alpha_numeric(int number, int upper);

char *convert_base(unsigned long number, unsigned int base, int upper);

/* main _printf function */

int _printf(const char *format, ...);

/* sub _printf function prototypes  */

int (*get_char_func(char *c))(va_list);

int print_char(va_list args_ptr);

int print_string(va_list args_ptr);

int print_percent(va_list args_ptr);

#endif /* MAIN_H  */
