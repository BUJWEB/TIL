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
	//*(++ptr)=20; ptr�� ����� �� ��ü�� ����
	//*(ptr+1)=20; ptr�� ����� �� ��ü�� �ٲ��� ����
	*/
	//����1: int�� �迭a�� �����ϰ� 1, 2, 3, 4, 5�� �ʱ�ȭ�� ����
	//�� �迭�� ù��° ��Ҹ� ����Ű�� ������ pa�� ����
	//pa�� ����� ���� ������Ű�� ���·� �迭��ҿ� �����Ͽ� 2�� �����Ͽ� Ȯ��
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
