#include "main.h"

/**
 * printf_pointer - prints an address.
 * @val: arguments.
 * Return: int..
*/
int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int d;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (d = 0; s[d] != '\0'; d++)
		{
			_putchar(s[d]);
		}
		return (d);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hexa_extra(a);
	return (b + 2);
}
