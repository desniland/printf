#include "main.h"
/**
 * printf_oct - prints an octal number.
 * @val: arguments.
 * Return: track.
*/
int printf_oct(va_list val)
{
	int x;
	int *array;
	int track = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		track++;
	}
	track++;
	array = malloc(track * sizeof(int));

	for (x = 0; x < track; x++)
	{
		array[x] = temp % 8;
		temp /= 8;
	}
	for (x = track - 1; x >= 0; x--)
	{
		_putchar(array[x] + '0');
	}
	free(array);
	return (track);
}
