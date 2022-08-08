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
	va_start(print, format);
	va_arg(print, char);
	if (format == '\0')
		return (-1);
	printf("%c\n", m);
	printf("%s\n", name);
	va_end(print);
	return (print);
}
