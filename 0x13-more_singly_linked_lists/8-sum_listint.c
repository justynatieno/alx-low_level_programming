#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: pointer to the head node of the listint_t linked list
 *
 * Return: the sum of all the data if empty, 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
