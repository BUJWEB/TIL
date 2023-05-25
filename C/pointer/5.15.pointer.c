#include<stdio.h>
int main()
{
	/*
		int num1 = 10, num2 = 20;
		int* ptr1 = &num1;
		int* ptr2 = &num2;
		int* temp=0;
		*ptr1 += 10;
		*ptr2 -= 20;
		printf("%d %d\n", *ptr1, *ptr2);
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		printf("%d %d", *ptr1, *ptr2);

		int arr[3] = { 11, 22, 33 };
	int* ptr=arr;
	for (int i = 0; i < 3; i++)
		printf("% d", ptr[i]);
	//*(++ptr)=20; ptr에 저장된 값 자체를 변경
	//*(ptr+1)=20; ptr에 저장된 값 자체는 바뀌지 않음
	*/
	//문제1: int형 배열a를 선언하고 1, 2, 3, 4, 5로 초기화한 다음
	//이 배열을 첫번째 요소를 가리키는 포인터 pa를 선언
	//pa에 저장된 값을 증가시키는 형태로 배열요소에 접근하여 2씩 증가하여 확인
	/*
	int a[5] = { 1,2,3,4,5 };
	int* pa=a;
	for (int i = 0; i < 5; i++)
	{
		*(pa + i) += 2;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	*/
	int a[6] = { 1,2,3,4,5,6 }, i;
	int* front = a;
	int* back = &a[5];
	int* temp;
	for (i = 0; i < 3; i++)
	{
		temp = *(front + i);

		*(front + i) = *(back -i);
		*(back - i) = temp;
	}
	for (i = 0; i < 6; i++)
		printf("%d", a[i]);

	return 0;

}
