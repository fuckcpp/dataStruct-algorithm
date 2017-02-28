#include <iostream>
#include"stl_test.h"
#include"insert_sort.h"
#include"select_sort.h"
#include"heap_sort.h"
#include"bubble_sort.h"
#include"macro.h"
#include"print.h"
#include"qsort.h"
#include"merge_sort.h"
using namespace std;
void setRandArr(int *arr,int size)
{
	for (int i = 0; i<size; i++)
	{
		arr[i] = rand();
	}
}

int main()
{
	srand((unsigned int)time(0));
	const int size = NUM_HS;
	int arr[size] = { 8,3,4,2,5,1,6,9,0,7 };
	// = { 49,38,65,97,76,13,27,49 };// = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	setRandArr(arr , size);
	insert_sort(arr, size);
	setRandArr(arr, size);
	shell_sort(arr, size);
	setRandArr(arr, size);
	select_sort(arr, size);
	setRandArr(arr, size);
	select_sort_2meta(arr, size);
	setRandArr(arr, size);
	heap_sort(arr,size); 
	setRandArr(arr, size);
	bubble_sort(arr,size);
	setRandArr(arr, size);
	bubble_sort_2_meta(arr, size);
	setRandArr(arr, size);
	quick_sort(arr, 0, size);
	setRandArr(arr, size);
	quick_sort_with_insert_sort(arr, 0, size); 
	setRandArr(arr, size);
	int temp[size];
	merge_sort(arr,0, size-1,temp);

	//print(arr, size);
	//long value = 1000000;
	//vector_test(value);
	
	//insert_sort(arr,NUM);
	//test1();
	getchar();
}