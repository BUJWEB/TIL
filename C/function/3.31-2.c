#include<stdio.h>
#pragma warning(disable:4996)
//이름 반복 호출
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
//1~10까지.
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
	printf("%d\n", n); //이 둘의 위치를 바꾸면
	num(n + 1); //1~10까지 -> 10~1까지 변환
}
*/
//팩토리얼!
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
	return n * fac(n - 1); //(n*n-1*n-2...) 으로 조건을 충족할때까지 돌아감
}
*/
//각자리의 숫자의 합
//10진수 -> 2진수
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
void binary(int n) { //10진수 2진수로 변경 해주는 코드
	if (!n)
		return;
	binary(n / 2);
	printf("%d", n % 2);

}
*/
//최대공약수 구하기
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


