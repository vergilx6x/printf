#include "main.h"


/**
 *
 * _printf - Printf function
 * @format: string format.
 * Return: Printed chars.
 *
 */

int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int buff_index = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_index++] = format[i];
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
