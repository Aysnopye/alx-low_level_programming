#include "main.h"

/**
 * get_bit - Value of bit at an index in decimal number is returned
 * @n: number to be searched
 * @index:the index of the bit available
 * Return: the value of the bit available
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
	return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
