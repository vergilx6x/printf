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
