#include "sort.h"

static void merge_sort(int argc, int *array, int left, int right)
{
	int i, j, mid, *work;

	work = malloc(sizeof(int) * (argc));
	if(left < right)
	{
		mid = (left + right) / 2;
		merge_sort(argc, array, left, mid);
		merge_sort(argc, array, mid + 1, right);
		for(i = mid; i >= left; i--)
			work[i] = array[i];
		for(j = mid + 1; j <= right; j++)
			work[right - (j - (mid + 1))] = array[j];
		i = left;
		j = right;
		for(int k = left; k <= right; k++)
		{
			if(work[i] < work[j])
			{
				merge_input(&array[k], &work[i]);
				// array[k] = work[i];
				// g_cnt++;
				i++;
			} else{
				merge_input(&array[k], &work[j]);
				// array[k] = work[j];
				// g_cnt++;
				j--;
			}
		}
	}
}

void sort(int argc, int *array)
{
	merge_sort(argc, array, 0, argc - 1);
}
