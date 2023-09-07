#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Entry point
 *
 * Description: 'the program's description'
 * @b: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
