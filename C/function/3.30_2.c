#include<stdio.h>

//�Լ� ����1
/*
void print_stars()
{
	//�Լ� ȣ��
	for (int i = 0; i < 30; i++)
		printf("*");
	printf("\n");

}//main �Լ� ����

int main() {
	print_stars();
	printf("Hello world\n");
	print_stars();


	int value = max2(-1, 1);
	printf("max : %d\n", value);
	printf("max : %d\n", max2(10,2));

	int x = get_int();
	int y = get_int();
	printf("�� ū���� %d\n", max2(x, y));
	printf("�� ���� ���� %d\n", add(x, y));

	return 0;
}//print_stars ����


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

//�ϳ���ž, ����Լ� ����
//������ 1��
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
//������ 2��
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
//������ 3��
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
//������ 4��
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
//������ 5��_n���� ������ ���� ���� �� ���
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

//����Լ��� ���� ����
/*
���������� �ڱ� �ڽ��� ȣ���ϴ� �Լ��� ����Լ���� �Ѵ�. 
�ݵ�� ���� ������ �ʿ��ϴٴ� Ư¡�� ������ �ִ�.

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
