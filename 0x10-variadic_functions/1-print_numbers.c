#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Entry point
 *
 * Description: 'the program's descriptibe the p
 * @separator: description
 * @n: number of int
 * @...: numbers
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	va_start(p, n);
	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", va_arg(p, int));
		if (separator == NULL)
			continue;
		if (i == (n - 1))
			continue;
		printf("%s", separator);
	}
printf("\n");
va_end(p);
}

