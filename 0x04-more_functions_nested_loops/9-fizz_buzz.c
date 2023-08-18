#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 1; i <= 100; i++)
	{
		j = i % 5;
		k = i % 3;
		if ((j == 0) && (k == 0))
			printf("FizzBuzz");
		else if (j == 0)
			printf("Buzz");
		else if (k == 0)
			printf("Fizz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
