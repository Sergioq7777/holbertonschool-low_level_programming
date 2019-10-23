#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -search for an integer.
 * @array: int
 * @size: int
 * @cmp: int
 *
 * Return: Always.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int iterador;

	if ((array == NULL) || (size == 0) || (cmp == NULL))
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (iterador = 0; iterador < size; iterador++)
	{
		if (cmp(array[iterador]))
		{
			return (iterador);
		}
	}
	return (-1);
}
