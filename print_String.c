#include "main.h"
/**
 * printf_String - print exclusive string.
 * @val: argument.
 * Return: the length of the string.
*/

int printf_String(va_list val)
{
	char *s;
	int x, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] < 32 || s[x] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[x];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_extra(cast);
		}
		else
		{
			_putchar(s[x]);
			len++;
		}
	}
	return (len);
}
