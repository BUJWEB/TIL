#include<stdio.h>

int main(void)
{
	/*
	char str1[6] = "Seoul";
	char str2[3] = { 'i', 's', '\0' };
	char str3[] = "the capital city of Korea.";
	printf("%s %s %s\n", str1, str2, str3);
	*/
	//���ڿ� ����
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	int i, cnt=0;
	printf("before : %s\n", src);
	for (i = 0; src[i] != '\0'; i++)
	{
		dst[i] = src[i];
		cnt++;
	}
	dst[i] = '\0';
	printf("after : %s\n", dst);
	printf("���ڿ��� ���� : %d %d", cnt, (int)sizeof(src));


	return 0;
}