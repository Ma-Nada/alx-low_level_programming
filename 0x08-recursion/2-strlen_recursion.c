#include <stdio.h>
#include "main.h"
/*
 * _strlen_recursion - length of the word
 * @s: the string
 * Return: the number of characters
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	s++;
	return (_strlen_recursion(s) + 1);
}
