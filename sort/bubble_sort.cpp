#include"bubble_sort.h"
void bubble_sort(int arr[], int size) 
{
	time_t start_time = clock();
	for (int i = size - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr, j, j+1);
		}
	}
	print_t("bubble_sort", start_time);
}
void bubble_sort_2_meta(int arr[], int size)
{
	time_t start_time = clock();
	int low = 0;
	int high = size - 1;
	while (low < high)
	{
		for(int i=low;i<high;i++)
		{
			if (arr[i] > arr[i + 1])
				swap(arr, i, i + 1);
		}
		high--;
		for (int i = high; i>low; i--)
		{
			if (arr[i] < arr[i - 1])
				swap(arr, i, i + 1);
		}
		low++;
	}
	print_t("bubble_sort_2_meta", start_time);
}
