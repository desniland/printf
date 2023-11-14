#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: x.
*/
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
		;
	return (x);

}

/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
*/
int _strlenc(const char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
		;
	return (a);
}
