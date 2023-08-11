#include <stdio.h>


int main(void)
{
	int n = 97;

	while (n <= 97)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
