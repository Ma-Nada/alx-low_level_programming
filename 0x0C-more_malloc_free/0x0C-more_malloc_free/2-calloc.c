#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates a memory for an array
 * @nmemb: number of elements
 * @size: the size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	size_t i;

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;
	return (s);
}
