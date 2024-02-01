#include "main.h"


int print_int(va_list args, char buffer[]) 
{
    int num = va_arg(args, int);
    int length = int_to_string(num, buffer);
    return write(1, buffer, length);
}


int print_char(va_list types, char buffer[])
{
	char c = va_arg(types, int);

	buffer[0] = c;
	buffer[1] = '\0';
	
	return (write(1, &buffer[0], 1));
}
/************************* PRINT A STRING *************************/
/**
 * print_string - Prints a string
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_string(va_list types, char buffer[])
{
	int length = 0;
	char *str = va_arg(types, char *);

	UNUSED(buffer);
	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[length] != '\0')
		length++;



	return (write(1, str, length));
}
/************************* PRINT PERCENT SIGN *************************/
/**
 * print_percent - Prints a percent sign
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_percent(va_list types, char buffer[])
{
	UNUSED(types);
	UNUSED(buffer);
	return (write(1, "%%", 1));
}
