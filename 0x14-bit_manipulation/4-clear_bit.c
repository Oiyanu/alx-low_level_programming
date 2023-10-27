#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - manipulates the value of a bit to 0
 * @n: pointer to number
 * @index: changes index to 0
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
