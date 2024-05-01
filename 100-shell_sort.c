#include "sort.h"

/**
  * shell_sort - A function tat sorts an array of intiger 
  * in ascending using shell sort algorithm.
  * @array: The array to sort.
  * @size: length of the array.
  * Return: VOid
  */
void shell_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0, y = 0;
	int aux = 0;

	if (array == NULL || size < 2)
		return;

	while (y < size / 3)
		y = y * 3 + 1;

	for (; y > 0; y = (y - 1) / 3)
	{
		for (i = y; i < size; i++)
		{
			aux = array[i];
			for (j = i; j >= y && array[j - y] > aux;
					j -= y)
			{
				if (array[j] != array[j - y])
					array[j] = array[j - y];
			}
			if (array[j] != aux)
				array[j] = aux;

		}
		print_array(array, size);
	}
}
