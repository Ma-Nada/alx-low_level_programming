#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: variable
 * @m: variable
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}
