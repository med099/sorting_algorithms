#include "sort.h"
/**
 * selection_sort - an algo to sort an array
 * @size: size of the array
 * @array: list with numbers
 */

void selection_sort(int *array, size_t size)
{
	size_t i, index;
	int tmp, swap, flag = 0;

	if (array == NULL)
		return ;
	i = 0;
	while (i < size)
	{
		tmp = i;
		flag = 0;
		index = i + 1;
		while (index < size)
		{
			if (array[index] < array [tmp])
			{
				tmp = index;
				flag += 1;
			}
			index++;
		}
		swap = array [i];
		array[i] = array[tmp];
		array[tmp] = swap;
		if (flag != 0)
			print_array(array, size);
		i++;
	}
}

