#include<stdio.h>
int main()
{
	//����_�迭2-������1_�ֻ��� ���� 10���� �Է¹޾� ������ ���
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
	//����_�迭2-������2_�л����� ������ 10������ �и�_�̿Ϸ�
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
	//����_�迭2-������3_���丮�� 1�� �ڸ�
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
	//����_�迭2-������4_������ �迭 �� ���� �� ���
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
	//����_�迭2-������5_4�� ���� ��ǥ 3�� ����, �������� �հ�
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
	//����_�迭2-������6_2��° ����� �� ���� ������ ���� ���ؼ� ���
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
	//����_�迭2-������7_2�� 3�� �迭 �ΰ� ���� ���� �� ���� ��ġ ��
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
	//����_�迭2-������8_4�� 2��, ���� ���� ��ü ��� ���
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
	//����_�迭2-������9_�Ľ�Į �ﰢ�� �ۼ�
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
	//����_�迭2-������10_3�� 5���� �빮�� �Է� �� �ҹ��ڷ� ���
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