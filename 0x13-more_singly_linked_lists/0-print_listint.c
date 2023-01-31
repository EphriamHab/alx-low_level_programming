#include "lists.h"

/**
  * print_listint - a function that prints all the elements of a listint_t list.
  * @h: pointer to head of const listint_t
  * Return: the number of nodes in h
  */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0; /* number of nodes printed */

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
