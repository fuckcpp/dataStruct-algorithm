#include"setRandArr.h"
void setRandArr(int *arr, int size)
{
	for (int i = 0; i<size; i++)
	{
		arr[i] = rand();
	}
}