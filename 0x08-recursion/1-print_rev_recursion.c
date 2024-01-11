#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - inverse a string
 * @s: the string to be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
