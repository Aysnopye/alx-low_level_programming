#include "main.h"

/**
 * clear_bit - Let 0 be the value of a given bit
 * @n: set your pointer to the number to change
 * @index: index of the bit to be cleared
 * Return: success for 1, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
