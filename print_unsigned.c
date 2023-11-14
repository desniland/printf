#include "main.h"

/**
 * printf_unsigned - prints unsigned integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_unsigned(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);
	int num, last = x % 10, digit, exp = 1;
	int y = 1;

	x = x / 10;
	num = x;

	if (x == 0)
	{
		_putchar('0');
		return 1;
	}

	while (num > 0)
	{
		exp = exp * 10;
		num = num / 10;
	}

	num = x;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num = num - (digit * exp);
		exp = exp / 10;
		y++;
	}

	_putchar(last + '0');

	return y;
}
