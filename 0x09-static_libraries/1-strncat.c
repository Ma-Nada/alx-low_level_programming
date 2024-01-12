#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * _strncat - copy a number of characters into the string
 * @dest: the string to recieve the addition at the end
 * @src: the string to copy from
 * @n: the number of characters to be added
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
