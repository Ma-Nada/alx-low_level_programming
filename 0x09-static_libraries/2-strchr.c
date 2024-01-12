#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * _strchr - first occurence of a given string
 * @s: the string
 * @c. the char to count the occurence for
 * Return: char
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
