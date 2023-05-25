#include<stdio.h>
int main()
{
	int a[6] = { 1,2,3,4,5,6 }, i;
	int* front = a;
	int* back = &a[5];
	int* temp;
	for (i = 0; i < 3; i++)
	{
		temp = *(front + i);

		*(front + i) = *(back - i);
		*(back - i) = temp;
	}
	for (i = 0; i < 6; i++)
		printf("%d", a[i]);
}



