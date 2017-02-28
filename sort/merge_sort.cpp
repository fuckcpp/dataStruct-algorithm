#include"merge_sort.h"
void merge(int arr[], int startIndex,int midIndex, int endIndex, int temp[])
{
	const int size = endIndex - startIndex + 1;
	//int* temp = (int*)malloc(size*sizeof(int));
	//int temp[1000];
	int i = startIndex;
	int j = midIndex + 1;
	int k = startIndex;
	while(i<=midIndex&&j<=endIndex)
	{
		if (arr[i] < arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	while (i <= midIndex)
	{
		temp[k++] = arr[i++];
	}
	while (j <=endIndex)
	{
		temp[k++]=arr[j++];
	}
	for (int k = 0; k < size; k++)
	{
		arr[startIndex + k] = temp[startIndex + k];
	}
}
void m_sort(int arr[],int startIndex,int endIndex,int temp[])
{
	if (startIndex >= endIndex) return;
	int midIndex = (startIndex + endIndex) / 2;
	m_sort(arr, startIndex, midIndex, temp);
	m_sort(arr, midIndex+1, endIndex, temp);
	merge(arr, startIndex, midIndex,endIndex, temp);
}
void merge_sort(int arr[], int startIndex, int endIndex, int temp[])
{
	 clock_t t = clock();
	 m_sort(arr, startIndex, endIndex, temp);
	 print_t("merge_sort", t);
}