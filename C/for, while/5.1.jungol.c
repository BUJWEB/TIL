#include<stdio.h>
int main()
{
	//정월_배열2-형성평가1_주사위 숫자 10개를 입력받아 개수를 출력
	/*
	int i, j, num[10][6]={0}, n;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		num[i][0] = n;
		for (j = 0; j < 6; j++)
		{
			if (j + 1 == num[i][0])
			{
				num[0][j]++;
			}
		}
	}

	for (j = 0; j < 6; j++) 
	{
		if (j == 0)
			num[0][j] = 0;
		printf("%d : %d\n", j + 1, num[0][j]);
	}
	*/
	//정월_배열2-형성평가2_학생들의 점수를 10단위로 분리_미완료
	/*
	int g=0, person[10]={0}, i;
	double num=0;

	while (1)
	{
		scanf("%d", &g);
		if (g == 0)
			break;
		num = g / 10;
		for (i = 9; i >= 0; i--)
		{
			if (i+1>= num && num>i)
			{
				person[i] += 1;
			}
		}
		if (g == 0)
			break;
	}

	for (i = 9; i >= 0; i--)
	{
		if(person[i]!=0)
			printf("%d : %d person\n", (i + 1) * 10, person[i]);
	}
	*/
	//정월_배열2-형성평가3_팩토리얼 1의 자리
	/*
	int i, num1=0, num2=0, f[10];
	scanf("%d %d", &num1, &num2);
	f[0] = num1;
	f[1] = num2;
	for (i = 2; i < 10; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
	for (i = 0; i < 10; i++)
	{
		if (f[i] >= 10)
			f[i] = f[i] % 10;
		if (f[i] >= 100)
			f[i] = f[i] % 100;
		printf("%d ", f[i]);
	}
	*/
	//정월_배열2-형성평가4_이차원 배열 다 더한 값 출력
	/*
	int i, j, num[4][3] = { {3, 5, 9}, {2, 11, 5}, {8, 30, 10}, {22, 5, 1} }, sum=0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", num[i][j]);
			sum += num[i][j];
		}
		printf("\n");
	}
	printf("%d", sum);
	*/
	//정월_배열2-형성평가5_4반 각각 대표 3명씩 선발, 제기차기 합계
	/*
	int class[4][3], i, j, sum=0;
	for (i = 0; i < 4; i++)
	{
		printf("%dclass? : ", i + 1);
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &class[i][j]);
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum += class[i][j];
		}
		printf("%dclass : %d\n",i+1, sum);
		sum = 0;
	}
	*/
	//정월_배열2-형성평가6_2번째 행부터 위 행의 오른쪽 왼쪽 더해서 출력
	/*
			int n[6][5] = { 1, 0, 1, 0, 1 }, i, j;
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5; j++)
				{
					if (i >= 1)
					{
						if(j==0)
							n[i][j] = n[i - 1][j + 1];
						else if(j==4)
							n[i][j] = n[i - 1][j - 1];
						else
							n[i][j] = n[i - 1][j + 1] + n[i - 1][j - 1];
					}
					printf("%d ", n[i][j]);
				}
				printf("\n");
			}
		*/
	//정월_배열2-형성평가7_2행 3열 배열 두개 가각 선언 후 같은 위치 곱
	/*
	int num1[2][3] = { 0 }, num2[2][3] = { 0 }, i, j, sum;

	printf("first array");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &num1[i][j]);
		}
	}

	printf("second array");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &num2[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", num1[i][j]*num2[i][j]);
		}
		printf("\n");
	}


	*/
	//정월_배열2-형성평가8_4행 2열, 가로 세로 전체 평균 출력
	/*
	int num[4][2], i, j, sum;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &num[i][j]);
		}
	}
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		sum = (num[i][0] + num[i][1]) / 2;
		printf("%d ", sum);
	}

	printf("\n");
	for (j = 0; j < 2; j++)
	{
		sum = 0;
		sum = (num[1][j] + num[2][j]+ num[3][j] + num[0][j]) / 4;
		printf("%d ", sum);
	}
	sum = 0;
	printf("\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			sum += num[i][j];
		}
	}
	sum = sum / 8;
	printf("%d ", sum);
	*/
	//정월_배열2-형성평가9_파스칼 삼각형 작성
	/*
	int n, num[10][10]={{1}, {1, 1}}, i, j, sum;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{

			num[i][j] = 1;
			if (i > 1 && j != 0 && j != i)
			{
				num[i][j] = num[i - 1][j] + num[i - 1][j - 1];
			}

		}
	}
	for (i = n-1; i >= 0; i--)
	{
		for (j = i; j >= 0; j--)
		{
			printf("%d " , num[i][j]);
		}
		printf("\n");
	}

	*/
	//정월_배열2-형성평가10_3행 5열의 대문자 입력 후 소문자로 출력
	/*
	char ch[3][5], i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf(" %c", &ch[i][j]);
		}
	}

	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			ch[i][j] += 32;
			printf(" %c ", ch[i][j]);
		}
		printf("\n");
	}
	*/

}