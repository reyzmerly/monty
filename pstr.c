#include "monty.h"
/**
 * f_pstr - PRINTs The stR Starting At The Top OF The tack,
 * FOLLOWED By A new
 * @head: Stack A Head
 * @counter: LINE_number
 * Return: MAEK No return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
