#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints every array elem on a newl
 * @array: array
 * @size: how many elem to be printed
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
