#include<stdio.h>
#pragma warning(disable:4996)
//�̸� �ݺ� ȣ��
/*
void name(int n);
int main()
{
	name(10);

	return 0;
}

void name(int n) {
	if (n == 0) {
		return;
	}
	printf("%d Jang\n", n);
	name(n - 1);

}
*/
//1~10����.
/*
void num(int n);

int main()
{
	num(1);
	return 0;
}

void num(int n) {
	if (n > 10) {
		return;
	}
	printf("%d\n", n); //�� ���� ��ġ�� �ٲٸ�
	num(n + 1); //1~10���� -> 10~1���� ��ȯ
}
*/
//���丮��!
/*
int fac(int n);
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d!=%d\n", n, fac(n));
	return 0;
}
int fac(int n) {
	if (n == 1) {
		return;
	}
	return n * fac(n - 1); //(n*n-1*n-2...) ���� ������ �����Ҷ����� ���ư�
}
*/
//���ڸ��� ������ ��
//10���� -> 2����
/*
int hap(int n);
void binary(int n);
int main()
{

	int n;
	scanf("%d", &n);
	printf("%d ", hap(n));
	binary(n);
	return 0;
}
int hap(int n) {
	if (!n) {
		return 0;
	}
	return (n % 10) + hap(n/10);
}
void binary(int n) { //10���� 2������ ���� ���ִ� �ڵ�
	if (!n)
		return;
	binary(n / 2);
	printf("%d", n % 2);

}
*/
//�ִ����� ���ϱ�
/*
int main() {
	printf("%d\n", gcd(6, 15));
	return 0;
}

int gcd(int x, int y) {
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
*/


