#include"search_algos.h"

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: input array
 * @size: Size of the array
 * @value: Value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int a = 0;
	double val = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[MIN(val, size) - 1] < value)
	{
		a = val;
		val = val + sqrt(size);

		if (a >= size)
			return (-1);
	}

	while (array[a] < value)
	{
		a++;
		if (a == MIN(val, size))
			return (-1);
	}

	if (array[a] == value)
		return (a);
	else
		return (-1);
}
