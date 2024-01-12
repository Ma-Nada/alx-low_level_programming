#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * _memcpy - copy a block of data from a source address to a destination
 * @dest: the destination address
 * @src: the source address
 * @n: the size
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
