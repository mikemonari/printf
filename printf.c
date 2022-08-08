#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character arguments
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list print;

	int length = 0;

	if (format == '\0')
		return (-1);
	va_start(print, format);
	length = _print_format(format, print);
	va_end(print);
	return (length);
}
