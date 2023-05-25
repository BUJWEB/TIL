#include<stdio.h>

//함수 연습1
/*
void print_stars()
{
	//함수 호출
	for (int i = 0; i < 30; i++)
		printf("*");
	printf("\n");

}//main 함수 종료

int main() {
	print_stars();
	printf("Hello world\n");
	print_stars();


	int value = max2(-1, 1);
	printf("max : %d\n", value);
	printf("max : %d\n", max2(10,2));

	int x = get_int();
	int y = get_int();
	printf("더 큰수는 %d\n", max2(x, y));
	printf("두 수의 합은 %d\n", add(x, y));

	return 0;
}//print_stars 종료


int max2(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int get_int()
{
	int num;
	printf("input number: ");
	scanf("%d", &num);
	return num;
}

int add(int x, int y)
{
	return x + y;
}
*/

//하노이탑, 재귀함수 공부
//인프런 1강
/*
double add(int x, int y) {
	double t;
	t = (double)x/y;
	return t;
}


int abs(int x);

int main() {
	int a = 30, b = 20, k;
	printf("%f\n", add(a, b));


	a = -3;
	printf("%d\n", abs(a));

	return 0;
}


int abs(int x) {
	if (x < 0) return x * -1;
	else return x;
}
*/
//인프런 2강
/*
void prinStar(int n)
{
	int i=0;
	for (i=1; i <= n; i++)
	{
		printf("*");
	}
	printf("\n");
}

int main() {
	int n, i=0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		prinStar(i);

	}
	return 0;
}
*/
//인프런 3강
/*
void isPrime(int n) {
	int i, false=1, true=0;
	for (i = 2; i < n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main(){
	int n, i, a;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a);
		if (isPrime(a)) printf("%d", a);

	}
	return 0;

}

*/
//인프런 4강
/*
int digit(int n) {
	if (n < 10) return 1;
	else if (n < 100) return 2;
	else if (n < 1000) return 3;
	else if (n < 10000) return 4;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", digit(n));
	return 0;
}

*/
//인프런 5강_n개의 원소중 가장 작은 값 출력
/*
int Min(int tmp[], int size) {
	int i, res = 2147000000;
	for (i = 0; i < size; i++) {
		if (tmp[i] < res) res = tmp[i];
	}
	return res;
}

int main() {
	int n, a[101], i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("%d\n", Min(a, n));
	return 0;

}
*/

//재귀함수에 대한 서술
/*
내부적으로 자기 자신을 호출하는 함수를 재귀함수라고 한다. 
반드시 종료 조건이 필요하다는 특징을 가지고 있다.

*/



void P(int c)
{
	if (c == 1) 
		return;
	scanf("%d", &c);
	printf("%d \n", c);
	P(c - 1);
}

int main(void)
{
	printf();
	return 0;
}
