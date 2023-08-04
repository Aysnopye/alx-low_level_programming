#include "main.h"
#include <unistd.h>

/**
 * _putchar - Create a char c to stdout
 * @c: to print the char
 * Return: 1 on success.
 * On error, return -1, and gives appropriate error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
