#include"heap_sort.h"
const int& compare(int arr[], int size , const int &i,const int &j)
{
	if (j>(size -1)) return i;
		return 	arr[i] > arr[j]?i:j;
}
void adjust_heap_recur(int arr[], int size, int i)   // i  (i+1)*2-1 (i + 1) * 2
{
	int left_child = 2 * i + 1;
	if (left_child > size-1) return;
	int ptr = compare(arr, size, left_child, left_child+1);
	if (arr[i] < arr[ptr]) {
		swap(arr, i, ptr);
		adjust_heap_recur(arr, size, ptr);
	}
	else return;
}
void adjust_heap_while(int arr[], int size, int i)
{
	int child = 2 * i + 1;
	while (child < size-1)
	{
		if ((child + 1 < size - 1) && arr[child] < arr[child + 1])
			child++;
		if (arr[i] < arr[child])
		{
			swap(arr, i, child);
			i = child;
			child = 2 * i + 1;
		}
		else break;
	}
}
void create_heap(int arr[], int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
	{
		adjust_heap_while(arr, size, i);
	}
}
void heap_sort(int arr[], int size)
{
	clock_t t = clock();
	create_heap(arr, size);
	for (int i = size - 1; i > 0; i--)
	{
		swap(arr, 0, i);
		adjust_heap_while(arr, --size,0);
	}
	print_t("heap_sort", t);
}