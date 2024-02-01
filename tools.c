#include "main.h"

/**
 *
 * print_buffer - Prints the contents of the buffer if it exist.
 * @buffer: Array of chars.
 * @buff_index: Index at which to add next char, represents the length.
 *
 **/

void print_buffer(char buffer[], int *buff_index)
{
	if (*buff_index > 0)
		write(1, &buffer[0], *buff_index);

	*buff_index = 0;
}


/**
 *
 * Chose_function - Prints an argument based on its type.
 * @format_specifier : Formatted string in which to print the arguments.
 * @list: List of arguments to be printed.
 * @index.
 * @buffer: Buffer array to handle print.
 *
 * Return: -1 or (printed_chars);
 *
 */



int chose_function(const char *format_specifier, int *index, va_list list, char buffer[])
{
	int i, printed_chars = -1;
	f_s f_s_types[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}
	};
	for (i = 0; f_s_types[i].specifier != '\0'; i++)
		if (format_specifier[*index] == f_s_types[i].specifier)
			return (f_s_types[i].function(list, buffer));

	if (f_s_types[i].specifier == '\0')
