#include "monty.h"
/**
 * f_pall - PrinT The Stack
 * @head: Stack Head
 * @counter: NO Used
 * Return: NO retrn
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
