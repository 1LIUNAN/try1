#include<stdio.h>
int main()
{
	int i, j, t;
	int arr[10] = { 10, 9, 8, 6, 7, 4, 5, 1, 67, 88 };
	for (i = 0; i < 10;i++)
	for (j = i + 1; j < 10; j++)
	{
		if (arr[i] < arr[j])
		{
			t = arr[j];
			arr[j] = arr[i];
			arr[i] = t;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d   ", arr[i]);
	return 0;
}