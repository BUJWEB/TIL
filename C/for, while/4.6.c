//배열
#include<stdio.h>
#include<time.h>
int main() 
{
	//10개의 랜덤수를 받아 최소값 최대값 출력
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

	printf("최대값은: %d\n", max);
	printf("최소값은: %d\n", min);
	*/
	//정월
	//연습1-1 5개 입력 후 출력(scanf)
	/*
	int a[5] = {0};
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
	*/
	//연습1-2 5개 입력 후 출력(for)
	/*
	int a[5]={0}, i = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	*/
	//자가진단1 문자 10개 입력 후 출력
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
	//연습2 26개의 문자배열 선언 
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
	//자가진단2 1~10까지 대입 후 출력
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
	//연습3 정수 10개 입력 후 3, 5, 10번째 출력
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
	//자가진단3 정수 10개 입력 후 1, 4, 7번째 출력
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
	//연습4 정수 입력중 0이 되면 멈춤, 짝수번째 수 출력_몰라!!
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
	//자가진단4_정수 입력중 0이 입력되면 반대로 출력	
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
	//연습 5 연도와 월을 입력받아 날 수를 출력
	/*
	int year=0, month=0;
	while (1) {
		scanf("%d", &year);
		printf("YEAR = %d\n", year);
	
		scanf("%d", &month);
		printf("MONTH = %d\n", month);

		if (month > 12 && month < 1)
			printf("잘못 입력하셨습니다.\n");
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
	//자가진단5_1~6반까지 평균 점수를 입력하고 두 반의 평균 구하기
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
	//연습 6_10개의 자연수를 입력받아 제일 큰 수를 구하시오
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
	//자가진단 6_10개의 정수 입력받아 제일 작은 수 출력
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
	//연습7_4자리 이하의 음수 양수 입력 후 짝수중 큰 값 홀수중 작은 값 출력
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
	//자가진단7_10개의 정수 입력, 100 미만중 큰 수 100 이상중 작은 수
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
	//연습8_10명의 컴퓨터 점수 입력. 총점, 평균 출력
	/*
	int max=0, i, grade=0, a[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		max += a[i];

	}
	printf("총점 = %d\n", max);
	printf("평균 = %0.1f", (float)max / 10);

	*/
	//자가진단8_10개 수 홀수번과 짝수번 평균
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
	//연습9_5개의 정수를 오름차순 정렬
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
	//자가진단 9_10개의 정수를 입력받아 내림차순 정리
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