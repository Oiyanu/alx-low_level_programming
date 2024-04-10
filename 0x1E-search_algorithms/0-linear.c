#include "search_algos.h"

/**
 * linear_search - function searches for a value in an array of integers
 * @array: pointer to the first element
 * @size: is the number of elements in array
 * @value: value to search for
 *
 * Return: value is not present in array or if array is NULL -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k = 0;

	if (!array || size == 0)
		return (-1);

	while (k < size)
	{
		printf("Value checked array[%lu] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
		k++;
	}

	return (-1);
}
