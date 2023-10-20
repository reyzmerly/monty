#include "monty.h"
/**
* free_stack - Free up A Doubly Linked list
* @head: HEAD OF 
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
