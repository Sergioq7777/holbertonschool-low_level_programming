#include "search_algos.h"


/**
 * linear_search - search
 * @value : Initial value
 * @size : size array
 * @array : array searched
 * Return: -1 or index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t c = 0;

	if (!array || size == 0)
		return (-1);
	for (; c <= size - 1; c++)
	{
		printf("Value checked array[%d] = [%i]\n", (int) c, array[c]);
		if (array[c] == value)
		{
			return (c);
		}
	}
	return (-1);
}
