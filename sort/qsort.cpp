#include"qsort.h"
void qsort(int arr[],int low,int high)
{
	if (low >= high) return;
	int temp = arr[low];
	int start = low;
	int end = high;
	while (low< high)
	{
		while(low<high&&arr[high] >= temp)//必须处理等于的情况，否则遇到相等的数，就会一直while
		high--;
		arr[low] = arr[high];
		while (low<high&&arr[low] <= temp)
		low++;
		arr[high] = arr[low];
	}
	arr[low] = temp;
	qsort(arr, start, low - 1);
	qsort(arr, low + 1, end);
}
void qsort_with_insert_sort(int arr[], int low, int high,int key)
{
	if (low >= high-key) return;
	int temp = arr[low];
	int start = low;
	int end = high;
	while (high-low>key)
	{
		while (low<high&&arr[high] >= temp)//必须处理等于的情况，否则遇到相等的数，就会一直while
			high--;
		arr[low] = arr[high];
		while (low<high&&arr[low] <= temp)
			low++;
		arr[high] = arr[low];
	}
	arr[low] = temp;
	qsort_with_insert_sort(arr, start, low - 1, key);
	qsort_with_insert_sort(arr, low + 1, end, key);
}
void quick_sort(int arr[],int low, int size)
{
	clock_t t = clock();
	qsort(arr, low, size-1);
	print_t("quick_sort", t);
}
void quick_sort_with_insert_sort(int arr[], int low, int size)
{
	clock_t t = clock();
	int key = 4;
	qsort_with_insert_sort(arr, low, size-1,key);	
	//print_t("quick_sort_with_insert_sort", t);
	insert_sort(arr, size);
	print_t("quick_sort_with_insert_sort", t);
}