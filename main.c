#include "sort.h"

size_t g_cnt = 0;

void merge_input(int *a, int *b)
{
	*a = *b;
	g_cnt++;
}

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
	g_cnt++;
}

int main(int argc, char **argv)
{

	int *array;

	if(argc > 1)
	{
		array = malloc(sizeof(int) * (argc));
		for(int i = 1; i < argc; i++)
			array[i - 1] = atoi(argv[i]);

		// for(int i = 1; i < argc; i++)
		// 	printf("%d ", array[i - 1]);
		// printf("\n");
		sort(argc, array);
		// for(int i = 1; i < argc; i++)
		// 	printf("%d ", array[i]);
		// printf("\n");
		printf("%zu\n", g_cnt);
		free(array);
	}
}
