#include<stdio.h>
#include<time.h>
int main()
{
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
	return 0;
}