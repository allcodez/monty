#include "monty.h"

/**
* free_stack - Frees a doubly linked list.
* @head: Head pointer to the stack.
*
* Return: Nothing.
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
