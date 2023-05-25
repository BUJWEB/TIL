#include<stdio.h>
int main()
{
	//5x5별찍기
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
	//1개씩 늘어가는 별 찍기(5행)
	/*
		for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
	printf("\n");

	}
	*/
	//1개씩 줄어드는 별 찍기
	/*
		for (int i = 5; i >= 1; i--) {
		for (int j = 1; j <=i; j++) {
			printf("*");
		}
		printf("\n");

	}
	*/
	//위에 띄어쓰기 넣기
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
	//위에 띄어쓰기 넣기2
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
	//피라미드
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j += 2)
			printf("*");
		printf("\n");
		
	}
	// 역피라미드
	// 마름모
	//사각형 찍기
	
	return 0;
}