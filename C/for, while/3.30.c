#include<stdio.h>
int main()
{
	//5x5�����
	/*
	for (int i = 1; i <= 5; i++) 
	{
		for (int j = 1; j <= 5; j++) 
		{
			printf("*");
		}
		printf("\n");

	}
	*/
	//1���� �þ�� �� ���(5��)
	/*
		for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
	printf("\n");

	}
	*/
	//1���� �پ��� �� ���
	/*
		for (int i = 5; i >= 1; i--) {
		for (int j = 1; j <=i; j++) {
			printf("*");
		}
		printf("\n");

	}
	*/
	//���� ���� �ֱ�
	/*
	int i=0, j=0, k=0;
	for (i = 1; i <= 5; i++) 
	{
		for (k = 0; k < 5-i; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++) 
		{
			printf("*");
		}
		printf("\n");

	}
	*/
	//���� ���� �ֱ�2
	/*
	for (int i = 5; i >= 1; i--) 
	{
		for (k = 0; k < 5-i; k++)
		{
			printf(" ");
		}
		for (int j = 1; j <=i; j++) {
			printf("*");
		}
		printf("\n");

	}
	*/
	//�Ƕ�̵�
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j += 2)
			printf("*");
		printf("\n");
		
	}
	// ���Ƕ�̵�
	// ������
	//�簢�� ���
	
	return 0;
}