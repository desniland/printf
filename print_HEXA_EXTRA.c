#include "main.h"

/**
 * print_HEX_extra - prints an HEXADECIMAL number.
 * @num: number to print.
 * Return: track.
*/
int print_HEX_extra(unsigned int num)
{
	int x;
	int *array;
	int track = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		track++;
	}
	track++;
	array = malloc(track * sizeof(int));

	for (x = 0; x < track; x++)
	{
		array[x] = temp % 16;
		temp /= 16;
	}
	for (x = track - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 7;
		_putchar(array[x] + '0');
	}
	free(array);
	return (track);
}
