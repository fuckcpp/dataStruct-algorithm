#include <iostream>
#include"stl_test.h"
#include"insert_sort.h"
#include"select_sort.h"
#include"heap_sort.h"
#include"macro.h"
#include"print.h"
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
	const int size = 1000;
	int arr[size];// = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };//= {49,38,65,97,76,13,27,49}; //
	/*setRandArr(arr , size);
	insert_sort(arr, size);
	setRandArr(arr, size);
	shell_sort(arr, size);
	setRandArr(arr, size);
	select_sort(arr, size);
	setRandArr(arr, size);
	select_sort_2meta(arr, size);*/
	setRandArr(arr, size);
	heap_sort(arr,size);
	print(arr, size);
	//long value = 1000000;
	//vector_test(value);
	
	//insert_sort(arr,NUM);
	//test1();
	getchar();
}