#include"print.h"
void print(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void print_t(string s, clock_t t)
{
	clock_t t2 = clock() - t;
	cout <<s<< "ºÄÊ±£º" << t2 << "ms" << endl;
}