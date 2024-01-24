#include "function_pointers.h"

/**
  * int_index - The main fuction
  * @array: array of inteegers that the function will search through
  * @size: the size of the array
  * @cmp: function pointer
  *
  * Return: returns an integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
