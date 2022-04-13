#include "function_pointers.h"
/**
 * int_index - a function that compare or check
 * @array: arrays of int
 * @size: the size of the array
 * @cmp: a comparing function
 * Return: if not element matches return -1 else return the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
