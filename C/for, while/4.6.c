//�迭
#include<stdio.h>
#include<time.h>
int main() 
{
	//10���� �������� �޾� �ּҰ� �ִ밪 ���
	/*
	int freq[10] = { 0 };
	int i, max=0, min=_CRT_INT_MAX;
	srand((unsigned)time(NULL));

	for (i = 0; i <= 9; i++)
	{
		freq[i] = rand() % 100;
		printf("%d\n", freq[i]);
		if (max < freq[i])
			max = freq[i];
		if (min > freq[i])
			min = freq[i];
	}

	printf("�ִ밪��: %d\n", max);
	printf("�ּҰ���: %d\n", min);
	*/
	//����
	//����1-1 5�� �Է� �� ���(scanf)
	/*
	int a[5] = {0};
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
	*/
	//����1-2 5�� �Է� �� ���(for)
	/*
	int a[5]={0}, i = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	*/
	//�ڰ�����1 ���� 10�� �Է� �� ���
	/*
	int i;
	char a[10] = { 0 };
	for (i = 0; i < 10; i++) {
		scanf(" %c", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		printf("%c", a[i]);
	}
	*/
	//����2 26���� ���ڹ迭 ���� 
	/*
		int i;
	char alph[26];
	for (i = 0; i < 26; i++) {
		alph[i] = 'A'+i;
	}
	for (i = 0; i < 26; i++) {
		printf("%c ", alph[i]);
	}

	return 0;
	*/
	//�ڰ�����2 1~10���� ���� �� ���
	/*
		int i;
	char alph[10];
	for (i = 0; i < 10; i++) {
		alph[i] = i + 1;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", alph[i]);
	}

	*/
	//����3 ���� 10�� �Է� �� 3, 5, 10��° ���
	/*
		int freq[10] = { 0 };
	int i;
	srand((unsigned)time(NULL));

	for (i = 0; i <= 9; i++)
	{
		freq[i] = rand() % 10;
	}
	printf("%d %d %d", freq[2], freq[4], freq[9]);
	*/
	//�ڰ�����3 ���� 10�� �Է� �� 1, 4, 7��° ���
	/*
		int freq[10] = { 0 };
	int i;
	srand((unsigned)time(NULL));

	for (i = 0; i <= 9; i++)
	{
		freq[i] = rand() % 10;
	}
	printf("\n%d %d %d", freq[0], freq[3], freq[6]);
	*/
	//����4 ���� �Է��� 0�� �Ǹ� ����, ¦����° �� ���_����!!
	/*
	int num[100]={0}, i = 0;

	for(i=0; i<100; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] == 0)
			break;
		printf("%d ", num[i]);

	}


	*/
	//�ڰ�����4_���� �Է��� 0�� �ԷµǸ� �ݴ�� ���	
	/*
		int num[100] = { 0 }, i = 0, cnt=0, j=0;

		for (i = 0; i < 100; i++)
		{
			scanf("%d", &num[i]);
			if (num[i] == 0)
				break;
		}
		for (j=i-1; j>=0; j--)
		{
			printf("%d ", num[j]);
		}
		*/
	//���� 5 ������ ���� �Է¹޾� �� ���� ���
	/*
	int year=0, month=0;
	while (1) {
		scanf("%d", &year);
		printf("YEAR = %d\n", year);
	
		scanf("%d", &month);
		printf("MONTH = %d\n", month);

		if (month > 12 && month < 1)
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		if (month == 0)
			break;
		if (month == 4 || month == 6 || month == 9 || month == 11)
			printf("30\n");
		else {
			if (month == 2)
			{
				if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)
					printf("29\n");
				else
					printf("28\n");
			}
			else
				printf("31\n");
		}
	
	
	}
	
	*/
	//�ڰ�����5_1~6�ݱ��� ��� ������ �Է��ϰ� �� ���� ��� ���ϱ�
	/*
	double grade[6] = { 0 }, max=0;
	int i, n;
	grade[0] = 85.6;
	grade[1] = 79.5;
	grade[2] = 83.1;
	grade[3] = 80.0;
	grade[4] = 78.2;
	grade[5] = 75.0;

	srand((unsigned)time(NULL));
	for (i = 1; i <= 2; i++) {
		n = rand() % 5;
		max += grade[n];
	}
	printf("%0.1f", max / 2);
	*/
	//���� 6_10���� �ڿ����� �Է¹޾� ���� ū ���� ���Ͻÿ�
	/*
	int n[10]={0}, i=0, max=0;
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; i++)
	{
		n[i] = rand() % 100;
		if (max < n[i])
			max = n[i];
	}
	printf("%d", max);
	*/
	//�ڰ����� 6_10���� ���� �Է¹޾� ���� ���� �� ���
	/*
	int n[10] = { 0 }, i = 0, min = _CRT_INT_MAX;
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; i++)
	{
		n[i] = rand() % 1000;
		if (min > n[i])
			min = n[i];
	}
	printf("%d", min);
	*/
	//����7_4�ڸ� ������ ���� ��� �Է� �� ¦���� ū �� Ȧ���� ���� �� ���
	/*
	int a[10] = { 0 }, i, max=0, min=_CRT_INT_MAX;

	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
	{
		a[i] = rand() %2000-1000;

		if (a[i] % 2 == 0) {
			if (max < a[i])
				max = a[i];
		}
		else {
			if (min > a[i])
				min = a[i];
		}
	}
	printf("%d, %d", min, max);
	*/
	//�ڰ�����7_10���� ���� �Է�, 100 �̸��� ū �� 100 �̻��� ���� ��
	/*

	int a[10] = { 0 }, i, max = 0, min = _CRT_INT_MAX;


	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);

		if (a[i]<100) {
			if (max < a[i])
				max = a[i];
		}
		else {
			if (min > a[i])
				min = a[i];
		}
	}
	if(max==0)
	{
		printf("%d, 100", min);
	}

	else
	{
		printf("%d %d", max, min);
	}

	*/
	//����8_10���� ��ǻ�� ���� �Է�. ����, ��� ���
	/*
	int max=0, i, grade=0, a[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		max += a[i];

	}
	printf("���� = %d\n", max);
	printf("��� = %0.1f", (float)max / 10);

	*/
	//�ڰ�����8_10�� �� Ȧ������ ¦���� ���
	/*
	int a[10] = { 0 }, i, sum=0, avg=0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if (i % 2 == 1)
			sum += a[i];
		else
			avg += a[i];

	}
	printf("sum = %d \navg = %0.1f", sum, (float)avg/5);
	*/
	//����9_5���� ������ �������� ����
	/*
	int a[5] = {0}, temp, i;
	a[0] = 95;
	a[1] = 75;
	a[2] = 85;
	a[3] = 50;
	a[4] = 100;
	for (i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
	*/  
	//�ڰ����� 9_10���� ������ �Է¹޾� �������� ����
	/*
	int a[10] = { 0 }, temp, i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}
	*/


return 0;
}