#include "main.h"
#include <stdio.h>
/**
 * _atoi - Entry point
 *
 * Description: 'the program's description'
 * @s: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int i, length, num = 0, numer = 0;
	char *k = s;

	while (*k != '\0')
	length++;
	/*for (i = 0; i < length; i++)
		if ((*(s + i) >= 48) && (*(s + i) <= 57) && (*(s + i) == 43) && (*(s + i) == 45))*/
	for ( i = 0; i <= length; i++)
	{
		if (s[i] == 45)
		{
			if ((s[i] >= 48) && (s[i] <= 57))
				break;
			num += 1;
		}
	}
	if (num % 2 == 1)
	{
		i = 0;
		 printf("-");
		 i++;
	}
		else
			i = 0;
	for (; i <= length; i++)
	{
		if ((s[i] >= 48) && (s[i] <= 57))
				{
				printf("%c",s[i]);
				numer = 1;
				}
		if ((numer == 1) && ( s[i] < 48) && ( s[i] > 57))
			break;
	}
	return (0);
}
