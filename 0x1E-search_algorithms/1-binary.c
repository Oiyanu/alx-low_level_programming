#include "search_algos.h"

/**
 * binary_search - function searches for a value in a sorted array of ints
 * @array:  pointer to the first element
 * @size: number of elements in array
 * @value:  is the value to search for
 *
 * Return: If value is not present in array or if array is NULL -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t y, k, z;

	if (array == NULL)
		return (-1);

	for (k = 0, z = size - 1; z >= k;)
	{
		printf("Searching in array: ");
		for (y = k; y < z; y++)
			printf("%d, ", array[y]);
		printf("%d\n", array[y]);

		y = k + (z - k) / 2;
		if (array[y] == value)
			return (y);
		if (array[y] > value)
			z = y - 1;
		else
			k = y + 1;
	}

	return (-1);
}
