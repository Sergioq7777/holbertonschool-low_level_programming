#include "search_algos.h"


/**
 * binary_search - search
 *
 * @value : value
 * @size : size array
 * @array : input
 * Return: -1 or index
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int ind;

	if (array)
	{
		for (ind = 0; ind < size; ind++)
		{
			printf("Value checked array[%d] = [%d]\n", ind, array[
				       ind]);
			if (array[ind] == value)
			{
				return (ind);
			}
		}
	}
	return (-1);
}
