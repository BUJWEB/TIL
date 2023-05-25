/*
#include<stdio.h>
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int a = max(2, 8);
	a = max(a, 6);
	int b = max(max(2, 8), 6);
	printf("%d", max);

}
*/
/*
#include<stdio.h>
int main()
{
	int i;
	for (i = 0; i < 5; i++) {
		int temp = 1;
		printf("temp = %d\n", temp);
		temp++;
	}
	return 0;
}

*/
#include<stdio.h>
int main()
{
	int arr[5] = { 29, 10, 14, 37, 13 };
	int i, j, temp, min=_CRT_INT_MAX;
	/*
		for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	*/
	printf("before srot ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	for (i = 0; i < 4; i++)
	{
		min = i;
		for (j = i+1; j < 5; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
			
		}

	}
	printf("\nafter srot ");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

}