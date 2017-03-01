#include"binary_search.h"
int binary_search(int arr[], int size,int target) 
{
	int low = 0;
	int high = size - 1;
	int midIndex = (low+high)/ 2;
	int index=-1;
	while (index == -1&&high>low)
	{
		if (target > arr[midIndex])
		{
			low = midIndex;
			midIndex = (low + high) / 2;
		}
		else if (target < arr[midIndex])
		{
			high = midIndex;
			midIndex = (low + high) / 2;
		}
		else
			index = midIndex;
	}
	return index;
}