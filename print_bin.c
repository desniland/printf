#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: 1 on success else -1.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int count = 0;
	int x, y = 1, z;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int d;

	for (x = 0; x < 32; x++)
	{
		d = ((y << (31 - x)) & num);
		if (d >> (31 - x))
			flag = 1;
		if (flag)
		{
			z = d >> (31 - x);
			_putchar(z + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
