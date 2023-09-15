#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Entry point
 *
 * Description: 'the program's description'
 * @separator: describe the parameter
 * @n: description
 * @...: description
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *str;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char *);
		if (str != NULL)
		printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
