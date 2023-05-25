
//입력받은 수 +10 -10 출력 함수
/*
void pluten(int n);
void minusten(int n); //함수 선언x 아래쪽에 함수가 있음을 선언

int main()
{
	int n;
	scanf("%d", &n);

	pluten(n);
	minusten(n);

	return 0;
}
void pluten(int n) {
	printf("10큰수 : %d\n", n + 10);
}
void minusten(int n) {
	printf("10작은수 : %d\n", n - 10); //진짜 함수 선언

}
*/
//입력받은 수만큼 별 출력
/*
void prinStar(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		printf("*");
	}
	printf("\n");
}

int main() {
	int n, i = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		prinStar(i);

	}
	return 0;
}
*/
//두 수의 합과 차 구하기
/*
int sub(int a, int b);

int main(){
	int a, b, sum=0;
	scanf("%d%d", &a, &b);
	sum = add(a, b);
	printf("두수의 합: %d\n", sum);
	printf("두수의 차: %d\n", sub(a, b));

	return 0;
}
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;

}
*/
//3과목의 평균
/*
double pyung(int kor, int eng, int math);
int main() {
	int kor, eng, math;
	double avg;
	scanf("%d%d%d", &kor, &eng, &math);
	avg = pyung(kor, eng, math);
	printf("3과목의 평균 : %.2f\n", avg);
}
double pyung(int kor, int eng, int math) {
	return (float)(kor + eng + math) / 3.0;
}
*/
//재귀함수
//이름 출력
