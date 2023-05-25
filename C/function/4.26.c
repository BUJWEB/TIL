#include<stdio.h>
//2차원 배열로 5x5숫자 찍기

void print_arr(int arr[][5]) 
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			printf("%3d ", arr[i][j]);
		printf("\n");
	}
}

int main()
{
	//가로로
	int arr[5][5], i, j, cnt = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = ++cnt;
		}
	}
	print_arr(arr);
	printf("\n");

	cnt = 0;

	//가로 지그재그
	for (i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 0; j < 5; j++)
				arr[i][j] = ++cnt;
		}
		else
		{
			for (j = 4; j >= 0; j--)
				arr[i][j] = ++cnt;
		}
	}
	print_arr(arr);
	printf("\n");
	cnt = 0;

	//세로로
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			arr[i][j] = ++cnt;
		}
	}
	print_arr(arr);
	printf("\n");
	cnt = 0;

	//세로 지그재그
	for (j = 0; j < 5; j++)
	{
		if (i % 2 == 0)
		{
			for (i = 0; i < 5; i++)
				arr[i][j] = ++cnt;
		}
		else
		{
			for (i = 4; i >= 0; i--)
				arr[i][j] = ++cnt;
		}
	}
	print_arr(arr);
	printf("\n");
	cnt = 0;

	//직각삼각형식 지그재그 배열
	//각 배열의 합 가능수만큼 대각선 자리가 빔, 대각선의 총 합은 8로 k=8
	for (int k = 0; k <= 8; k++)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (i + j == k)
				{
					if (k % 2 == 0)
						arr[j][i] = ++cnt;
					else
						arr[i][j] = ++cnt;
				}
			}
		}
	}			
	print_arr(arr);
	printf("\n");
	cnt = 0;

	//달팽이
	int x = 0, y = -1, turn = 1, z = 5;

		while (z != 0)
		{
			for (i = 0; i < z; i++)
			{
				y += turn;
				arr[x][y] = ++cnt;
			}
			z--;
			for (i = 0; i < z; i++)
			{
				x += turn;
				arr[x][y] = ++cnt;
			}
			turn *= -1;
		}

	print_arr(arr);
	printf("\n");
	cnt = 0;

	
	//세로 모래시계
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i + j == 4)
			{
				arr[i][j] = ++cnt;
			}
			else if (i == j)
			{
				arr[i][j] = ++cnt;
			}
			else if (i == 0 || i == 4 || j == 2)
			{
				arr[i][j] = ++cnt;
			}
			else
			{
				arr[i][j] = 0;
			}
		}
	}
	print_arr(arr);
	printf("\n");
	cnt = 0;
	

	//가로 모래시계
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (i + j == 4)
			{
				arr[i][j] = ++cnt;
			}
			else if (i == j)
			{
				arr[i][j] = ++cnt;
			}
			else if (j == 0 || j == 4 || i == 2)
			{
				arr[i][j] = ++cnt;
			}
			else
			{
				arr[i][j] = 0;
			}
		}
	}
	
	print_arr(arr);
	printf("\n");
	cnt = 0;
}
