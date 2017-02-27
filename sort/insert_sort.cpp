#include"insert_sort.h"
void insert_sort(int *arr, int size)
{
	clock_t t = clock();
	for (int i = 1; i < size; i++)//从第二个开始
	{
		if (arr[i] < arr[i - 1])
		{
		int temp = arr[i];
		int j = i - 1;
		while (j > 0 && (temp<arr[j]))
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
		}
	}
	print_t("insert_sort",t);
}
void shell_sort(int *arr, int size)
{
	clock_t t = clock();
	int key = size / 2;
	while (key > 0)
	{
		for (int i = 0; i < key; i++)
		{
			for (int j = i + key; j < size; j += key)
			{
				if (arr[j] < arr[j - key])
				{
					int k = j-key;
					int temp = arr[j];
					while ((k > 0)&&(temp < arr[k]))
					{
						arr[k+key] = arr[k ];
						k -= key;
					}
					arr[k+key] = temp;
				}
			}
		}
		key /= 2;
	}
	print_t("shell_sort",t);
}
