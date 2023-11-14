#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - converter for printf
 * @mar: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
*/

typedef struct format
{
char *mar;
int (*function)();
} convert;

int printf_char(va_list val);
int _putchar(char c);
int printf_string(va_list val);
int printf_37(void);
int printf_int(va_list args);
int printf_bin(va_list val);
int printf_String(va_list val);
int printf_hex(va_list val);
int printf_HEX(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int print_HEX_extra(unsigned int num);
int print_hexa_extra(unsigned long int num);
int printf_str_rev(va_list args);
int printf_rot13(va_list args);
int printf_dec(va_list args);
int printf_pointer(va_list val);
int _printf(const char *format, ...);
int _strlen(char *s);
int print_non_printable(va_list types, char buffer[],
int flags, int width, int precision, int size);

#endif
