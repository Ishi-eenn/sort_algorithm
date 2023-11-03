#include "sort.h"

// selection_sort
void sort (int argc, int *array)
{
	for(int i = 0; i < argc - 1; i++)
	{
		int min = i;
		for(int j = i + 1; j < argc; j++)
		{
			if(array[j] < array[min])
				min = j;
		}
		if (min != i)
			swap(&array[min], &array[i]);
	}
}

// int main(int argc, char **argv)
// {
// 	int *array;

// 	if(argc > 1)
// 	{
// 		array = malloc(argcof(int) * (argc));
// 		for(int i = 1; i < argc; i++)
// 			array[i - 1] = atoi(argv[i]);

// 		for(int i = 1; i < argc; i++)
// 			printf("%d ", array[i - 1]);
// 		printf("\n");
// 		selection_sort(argc, array);
// 		for(int i = 1; i < argc; i++)
// 			printf("%d ", array[i]);
// 		printf("\n");
// 	}
// 	free(array);
// }
