#include <stdio.h>
/**
 * main - entry point
 * Description: 'print alphabet in reverse'
 * return: always 0
 * main result description: it gives out numbers
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
