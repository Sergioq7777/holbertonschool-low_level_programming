#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter.
 * @array: int
 * @size: size_t
 * @action: void
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t iterador;

	if ((array == NULL) || (size == 0) || (action == NULL))
	{
		return;
	}
	for (iterador = 0; iterador < size; iterador++)
	{
		action(array[iterador]);
	}
}
