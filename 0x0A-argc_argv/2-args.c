#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
