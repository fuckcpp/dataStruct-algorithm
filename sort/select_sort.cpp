#include"select_sort.h"
int selectMin(int arr[],int size,int i)
{
	int ptr = i;
	for(int j=i+1;j<size;j++)
	{
		if (arr[j] < arr[ptr])
			ptr = j;
	}
	return ptr;
}
void select2meta(int arr[], int size, int i,int &min,int &max)
{
	min = i;
	max = size - i;
	for (int j = i + 1; j<size-j; j++)
	{
		if (arr[j] < arr[min])
			min = j;
		if (arr[j] > arr[max])
			max = j;
	}
}
void select_sort(int arr[], int size)
{
	clock_t t = clock();
	for (int i = 0; i < size; i++)
	{
		int ptr = selectMin(arr, size, i);
		if (ptr != i)
		swap(arr, i, ptr);
	}
	print_t("select_sort", t);
}
void select_sort_2meta(int arr[], int size)
{
	clock_t t = clock();
	for (int i = 0; i < size; i++)
	{
		int ptr_min, ptr_max;
		select2meta(arr, size, i, ptr_min, ptr_max);
		if (ptr_min != i) swap(arr, i, ptr_min);
		swap(arr, size-i, ptr_max);
	}
	print_t("select_sort_2meta", t);
}