#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: the number to change carries a pointer
 * @index: Set the index of the bit to 1
 * Return: succes for 1, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
