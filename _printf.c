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
		else
		{
			print_buffer(buffer, &buff_index);
			++i;
			printed = chose_function(format, &i, list, buffer);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_index);

	va_end(list);

	return (printed_chars);
}
