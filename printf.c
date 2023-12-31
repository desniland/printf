#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
*/
int _printf(const char * const format, ...)
{
	convert des[] = {
		{"%s",  printf_string}, {"%c",  printf_char},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_str_rev},
		{"%R", printf_rot13}, {"%b", printf_bin},
		{"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_String}, {"%p", printf_pointer}
	};

	va_list args;
	int x = 0, y, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:

	while (format[x] != '\0')
	{
		y = 13;
		while (y >= 0)
		{
			if (des[y].mar[0] == format[x] && des[y].mar[1] == format[x + 1])
			{
				length += des[y].function(args);
				x = x + 2;
				goto Here;

			}
			y--;
		}
		_putchar(format[x]);
		length++;
		x++;
	}
	va_end(args);
	return (length);
}
