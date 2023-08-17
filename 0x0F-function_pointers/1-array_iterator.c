#include "function_pointers.h"
/**
 * array_iterator - prints maps array trough a functionn pointer
 * @array: the int array
 * @size: array size
 * @action: functionn pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
		action(*array++);
}

