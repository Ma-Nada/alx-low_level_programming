#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - appends the string pointed to by src to the one pointed to by dest
 * @dest: the initial string
 * @src: the string to be added
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
