#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - inverse a string
 * @s: the string to be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	while (i != 0)
	{
		i--;
	       printf("%c", s[i]);
	}
}	
