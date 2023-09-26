#include <stdio.h>
#include "lists.h"
/**
 *print_listint - prints all the elements of a linked list
 *@h: poiter to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
