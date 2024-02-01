#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024


/**
 * struct format_specifer - Struct op
 *
 * @specifier: The format.
 * @function: The function associated.
 *
 */

struct format_specifier
{
	char specifier;
	int (*function)(va_list, char[]);
};


/**
 * typedef struct format_specifier f_s - Struct op
 *
 * @format_specifier : The format.
 * @f_s : The function associated.
 */
typedef struct format_specifier f_s;

int _printf(const char *format, ...);

/******FUNCTIONS******/

/* Funtions to print chars and strings */

int print_char(va_list types, char buffer[]);
int print_string(va_list types, char buffer[]);
int print_percent(va_list types, char buffer[]);

/* Functions to print numbers */

int print_int(va_list types, char buffer[]);


/*******tools******/

void print_buffer(char buffer[], int *buff_index);
int int_to_string(int num, char buffer[]);
int print_int(va_list args, char buffer[]);
int chose_function(const char *fmt, int *i, va_list list, char buffer[]);



#endif /* MAIN_H */

