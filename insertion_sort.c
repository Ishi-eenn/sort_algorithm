#include "sort.h"

// insertion_sort
void sort (int argc, int *array)
{
	for(int i = 1; i < argc; i++)
	{
		int j = i;
		while(j > 0 && array[j - 1] > array[j])
		{
			swap(&array[j - 1], &array[j]);
			j--;
		}
	}
}
