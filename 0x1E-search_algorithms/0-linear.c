#include "search_algos.h"
/**
 *
 * a funtion to do a linear search
 * */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for(i = 0;i < size;i++)
	{
		  printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if(array[i] == value)
			return i;
	}
	return -1;
}
