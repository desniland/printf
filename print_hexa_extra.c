#include "main.h"

/**
 * print_hexa_extra - prints an hexadecimal number.
 * @num: number to print..
 * Return: track.
 */
int print_hexa_extra(unsigned long int num)
{
	long int x;
	long int *array;
	long int track = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		track++;
	}
	track++;
	array = malloc(track * sizeof(long int));

	for (x = 0; x < track; x++)
	{
		array[x] = temp % 16;
		temp /= 16;
	}
	for (x = track - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 39;
		_putchar(array[x] + '0');
	}
	free(array);
	return (track);
}
