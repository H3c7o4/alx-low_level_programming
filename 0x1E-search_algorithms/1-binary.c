#include"search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: input sorted array
 * @size: Size of the input array
 * @value: Value to search for
 * Return: The index where the value is located or
 * -1 if it doesn't exist in the array
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int L = 0;
	unsigned int m;

	if (array == NULL)
		return (-1);
	while (size >= L)
	{
		m = (L + size) / 2;
		if (value > array[m])
			L = m + 1;
		else if (value < array[m])
			size = m - 1;
		else
			return (m);
	}
	return (-1);
}
