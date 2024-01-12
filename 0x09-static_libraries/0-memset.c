#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *  * _memset - fill a block of memory with a paricular value
 *  @s: the string that will have the char added
 *  @b: the char to be added
 *  @n: where to add the b in the string
 *   *
 *    * Return - 0 Successful
 *     */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
