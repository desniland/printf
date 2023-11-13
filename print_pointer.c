#include "main.h"

/**
 * printf_pointer - prints an address.
 * @val: arguments.
 * Return: counter.
*/
int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int z;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (z = 0; s[z] != '\0'; z++)
		{
			_putchar(s[z]);
		}
		return (z);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hexa_extra(x);
	return (y + 2);
}
