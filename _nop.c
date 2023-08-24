#include "monty.h"

/**
 * _nop - function that does nothing.
 * @stack: double pointer to the stack.
 * @line_number: script line number.
 *
 * Usage: nop .
 *
 * Return: No return.
 */

void _nop(stack_t **stack, unsigned int line_number)
{
	(void)(stack);
	(void)(line_number);
}
