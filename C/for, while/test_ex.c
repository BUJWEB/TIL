#include<stdio.h>

int main()
{
	//���� ����_1291_������_Ȯ��
	/*
	int s, e, i, j;
	scanf("%d %d", &s, &e);
	int temp = s > e ? s : e;
	e = s > e ? e : s;
	for (i = 1; i <= 9; i++)
	{
		for (j = temp; j >= e; j--)
		{
			printf("%d * %d = %d ", j, i, i * j);
		}
		printf("\n");
	}
	*/
	//���� ����_1341_������2
	/*
	int i, j, num1, num2, temp, cnt=0;
	scanf("%d %d", &num1, &num2);
	temp = num1 > num2 ? num1 : num2;
	num2 = num1 < num2 ? num1 : num2;
	num1 = temp;
	for (i = num1; i >= num2; i--)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d ", i, j, i * j);
			cnt++;
			if (cnt % 3 == 0)
				printf("\n");
		}
		printf("\n");
	}
	*/
	//���� ����_1303_���ڻ簢��1
	/*
	int num1, num2, i, j, cnt=0;
	scanf("%d %d", &num1, &num2);
	for (i = 1; i <= num1; i++)
	{
		for (j = 1; j <= num2; j++)
		{
			printf("%d ", ++cnt);
		}
		printf("\n");
	}
	*/
	//���� ����_1856_���ڻ簢��2
	/*
	int n, m, i, j, cnt=0, sq[5][5];
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 1)
		{
			for (j = m-1; j >= 0; j--)
			{
				cnt++;
				sq[i][j] = cnt;
			}
		}
		else
		{
			for (j = 0; j < m; j++)
			{
				cnt++;
				sq[i][j] = cnt;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", sq[i][j]);
		}
		printf("\n");

	}
	*/
	//���� ����_1304_���ڻ簢��3
	/*
	int n=0, i, j, cnt = 0, sq[5][5];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cnt++;
			sq[j][i] = cnt;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", sq[i][j]);
		}
		printf("\n");

	}
	*/
	//���� ����_1307_���ڻ簢��1
	/*
	int n = 0, i, j;
	char sq[5][5], cnt = 'A';
	scanf("%d", &n);
	for (i = n-1; i >= 0; i--)
	{
		for (j = n-1; j >= 0; j--)
		{
			sq[j][i] = cnt++;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%c ", sq[i][j]);
		}
		printf("\n");

	}
	*/
	//���� ����_1314_���ڻ簢��2
	/*
	int i, n, j;
	char cnt = 'A', arr[100][100] = {0};

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 0; j < n; j++)
			{
				arr[j][i] = cnt++;
				if (cnt > 'Z')
					cnt = 'A';
			}

		}
		else
		{
			for (j = n-1; j >= 0; j--)
			{
				arr[j][i] = cnt++;
				if (cnt > 'Z')
					cnt = 'A';
			}

		}

	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%c ", arr[i][j]);
		printf("\n");
	}
	*/
	//���� ����_1314_���ڻﰢ��1
	/*
	char arr[100][100] = { 0 };
	char chr = 'A';
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
			printf("  ");
		for (j=0; j<=i; j++)
		{
			printf("%c ", chr++);
			if (chr > 'Z')
				chr = 'A';
		}
		printf("\n");
	}
	*/
	//���� ����_1314_���ڻﰢ��2
	/*
char arr[100][100] = { 0 };
char chr = 'A';
int n, i, j;
scanf("%d", &n);
if (n % 2 == 0 || n < 1 || n>100)
{
	printf("INPUT ERROR\n");
	return 0;
}
for (i = n/2; i >=0; i--)
{
	for (j = i; j <= (n / 2) * 2 - i; j++)
	{
		arr[j][i] = chr++;
		if (chr > 'Z')
			chr = 'A';
	}
}
for (i = 0; i < n; i++)
{
	for (j = 0; j < n; j++)
		printf("%c ", arr[i][j]);
	printf("\n");
}
*/

	//���� ����1_����_Ȯ��
	 /*
		   int i, num1 = 0, num2 = 0, temp = 0, add = 0, num3[3] = { 0 };
	 scanf("%d %d", &num1, &num2);
	 add = num1 * num2;
	 for (i = 0; i <3; i++)
	 {
		num3[i] = num2 % 10;
		num2 /= 10;
		printf("%d\n", num1*num3[i]);
	 }
	 printf("%d\n", add);
	 */
	 //���� ����1_������ ����
	 /*
		int input, sum = 1;
		int num[10];

		for (int i = 0; i < 10; i++) num[i] = 0; // �迭 �� 0���� ����

		for (int i = 0; i < 3; i++) { // A*B*C ���ϱ�
		   scanf("%d", &input);
		   sum *= input;
		}

		for (int i = 0; sum > 0; i++) { // �� ���ڰ� �� �� �������� ���ϱ�
		   input = sum % 10;
		   num[input] += 1;
		   sum /= 10;
		}

		for (int i = 0; i < 10; i++) printf("%d\n", num[i]);
	 */
	 //���� ����1_����� ���
	 /*
		int num1, num2[40], num3, i, temp1=0, temp2=0;
		scanf("%d", &num1);
		for (i = 0; i < num1; i++)
		   scanf("%d", &num2[i]);
		scanf("%d",&num3);
		for (i = 0; i < num1; i++)
		{
		   if (num2[i] <= num3&&num3 % num2[i] == 0)
		   {
			  temp1 += num2[i];
		   }
		   if (num2[i] >= num3 && num2[i] % num3 == 0)
		   {
			  temp2 += num2[i];
		   }
		}
		printf("%d\n%d", temp1, temp2);
	 */
	 //����_����1_��� ���ϱ�
	 /*
		int N, K, i, cnt = 0;
		scanf("%d %d", &N, &K);
		for (i = 1; i <= N; i++)
		{
		   if (N % i == 0)
			  cnt++;
		   if (cnt == K)
		   {
			  printf("%d", i);
			  break;
		   }
		}
		if (cnt != K)
		   printf("0");
	 */
	 //����_����1_���
	 /*
		int N, i;
		scanf("%d", &N);
		for (i = 1; i <= N; i++)
		{
		   if (N % i == 0)
			  printf("%d ", i);
		}
	 */
	 //����_����1_�ּҰ���� �ִ�����_Ȯ��
	 /*
	 int num1, num2, gcd=1,i;

	 scanf_s("%d %d", &num1, &num2);

	 for (i = 2; i <= (num1 > num2 ? num2 : num1); i++)
		if (num1 % i == 0 && num2 % i == 0)
		   gcd = i;
	 printf("%d\n", gcd);
	 printf("%d\n", num1 * num2 / gcd);
	 return 0;
	 */
	 //����_����1_�ּҰ���� �ִ�����2
	/*
	int N, num[10], i, j, gcd = 0, lcm = 0, cnt = 0, cnt2 = 0, temp = 1, min = _CRT_INT_MAX, max = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		cnt++;
		scanf("%d", &num[i]);
		if (num[i] < min)
			min = num[i];
		if (num[i] > max)
			max = num[i];
	}
	for (i = 2; i <= min; i++)
	{
		for (j = 0; j < cnt; j++)
		{
			if (num[j] % i == 0)
			{
				cnt2++;
				if (cnt2 == cnt)
					gcd = i;
			}
		}
		if (cnt2 == cnt)
			break;
		cnt2 = 0;
	}
	cnt2 = 0;
	for (i = 1; i < 20000; i++)
	{
		for (j = 0; j < cnt; j++)
		{
			if (i % num[j] == 0)
			{
				cnt2++;
				if (cnt2 == cnt)
					lcm = i;

			}
		}
		if (cnt2 == cnt)
			break;
		cnt2 = 0;
	}
	printf("%d\n", gcd);
	printf("%d\n", lcm);
	*/
	//����_����1_���ʰ���
	/*
	int n=0, m=0, k=0, i=0, j=0, cnt=0, fall_P=0, fall_V=0, fall_PV=0;
	scanf("%d %d %d", &n, &m, &k);
	for (i = 1; i <= k; i++)
	{
		if (i % (n+1) == 0 && i % (m+1) == 0)
			fall_PV++;
		else if (i % (n+1) == 0 && i % (m + 1) != 0)
			fall_V++;
		else if (i % (m+1) == 0 && i % (n + 1) != 0)
			fall_P++;
		else
			cnt++;
	}
	printf("%d %d %d %d", cnt, fall_PV, fall_P, fall_V);
	*/

}