#include "monty.h"

/**
 * _queue - this function will set the format of the data to a queue (FIFO).
 * @stack: double pointer to the head of stack.
 * @line_number: script line number
 *
 * Return: No return.
 */
void _queue(stack_t **stack, unsigned int line_number)
{
        (void)(stack);
        (void)(line_number);
        var.queue = QUEUE;
}
