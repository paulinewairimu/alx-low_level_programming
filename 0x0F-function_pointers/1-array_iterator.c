#include "function_pointers.h"

/**
 * array_iterator - Main Function
 * @array: array of integer
 * @size: size or length of array
 * @action: function pointer parameter
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
