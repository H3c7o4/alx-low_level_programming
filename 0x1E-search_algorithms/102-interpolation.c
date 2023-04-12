#include"search_algos.h"

/**
 * interpolation_search - function that searches for a value
 * in a sorted array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index of the value to search for or
 * -1 if value is not present in array or if array is NULL.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array)
	{
		while ((array[high] != array[low]) && (value >= array[low])
			&& (value <= array[high]))
		{
			pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
			if (pos > size)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

			if (array[pos] < value)
				low = pos + 1;
			else if (value < array[pos])
				high = pos - 1;
			else
				return (pos);
		}
	}
	return (-1);
}
