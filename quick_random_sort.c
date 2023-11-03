#include "sort.h"

int choose_pivot_id(int data[], int left, int right)
{
	return (left + rand() % (right - left + 1));
}

int partition(int data[], int left, int right, int pivotID)
{
	int pivot = data[pivotID];
	swap(&data[pivotID], &data[right]);
	int p = left;
	int i;
	for(i = left; i <= right-1; i++){
		if(data[i] <= pivot){
			swap(&data[i], &data[p]);
			p++;
		}
	}
	swap(&data[p], &data[right]);
	return (p);
}

void quick_sort(int data[], int left, int right)
{
	if(left >= right)
		return;
	int pivotID = choose_pivot_id(data, left, right);
	int p = partition(data, left, right, pivotID);
	quick_sort(data, left, p - 1);
	quick_sort(data, p + 1, right);
}

void sort(int argc, int *array){
	quick_sort(array, 0, argc - 1);
}
