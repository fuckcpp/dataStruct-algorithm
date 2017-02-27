#include"swap.h"
void swap(int arr[], int i, int ptr)
{
	int temp = arr[i];
	arr[i] = arr[ptr];
	arr[ptr] = temp;
}