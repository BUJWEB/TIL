//구구단 2단~9단
/*#include<stdio.h>
int main() {
    int i, j;
    for (i = 2; i <= 9; i++)
        for (j = 1; j <= 9; j++)
            printf("%d x %d = %d\n", i, j, i * j);
    return 0;

}*/
/*#include<stdio.h>
int main() {
    int i, j;
    for (i = 2; i <= 9; i++)
        for (j = 1; j <= 9; j++) {
            printf("%dx%d=%d  ", i, j, i * j);
            if (j == 9)
                printf("\n");
        }

    return 0;

}
*/
//두끼가서 마라떡볶이(마라소스2 두끼소스1)에 분모자랑 당면이랑 옥수수면이랑 떡이랑 소세지 라면사리

//문제1) 1+2+3+...+n의 결과가 최초로 5000보다 커질 때의 n을 구하시오.
/*#include<stdio.h>
int main()
{
    int i=1, max=0;
    while (1) {
        max = i + max;
        if (max > 5000)
            break;
        i++;
    }
    printf("%d", i);


    return 0;
}*/
//문제2) 1이상 20미만의 정수를 출력하되, 2의 배수와 3의 배수를 출력에서 제외하시오.
/*#include<stdio.h>
int main(){
    int i;
    for (i = 1; i <= 20; i++)
        if (i % 2 != 0 && i % 3 != 0)
            printf("%d\n", i);
}
*/
//문제3) 구구단을 출력하되 짝수 단(2단,4단,6단,8단)만 출력되도록하자.
/*
#include<stdio.h>
int main() {
    int i, j;
    for (i = 2; i < 9; i++) {
        if (i % 2)
            continue;
        for (j = 1; j <= 9; j++) {
            if (i < j)
                break;

            printf("%d * %d =%d\n0", i, j, i * j);
        }
        printf("\n");
    }


    return 0;
}

*/
/*
문제4) 다음식을 만족하는 모든A와 Z를 구하는 프로그램을 작성해보자.
A Z
+Z A
----
9 9*/
/*#include<stdio.h>
int main(){
   
    for (int a = 1; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            if (11*a + 11*b == 99)
                printf("%A = d\n, Z = d\n", 10*a + b, 10*b + a);

        }
            
    }
       
    return 0;

}
*/

#include<stdio.h>
int main() {
    //1. 10이하의 입력받은 정수만큼 "C언어 프로그래밍" 출력 
   /* int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
        printf("c언어 프로그래밍\n");*/
        //2. A~Z 출력
        /*    char ch=64;
        for (int i = 1; i <= 26; i++)
            printf("%c\n", ch + i);*/
            //3. 1~20 홀수 출력
             /*   int i;
            for (i = 1; i <= 20; i++)
                if (i % 2 == 1)
                    printf("%d", i);*/
                    //4. 1부터 입력받은 수까지의 합 출력
                    /*  int a, max;
                    scanf("%d", &a);
                    for (int i = 1; i <= a; i++)
                        max = max + i;
                    printf("%d", max);*/
                    //5. 10개의 정수 입렵받고 짝수 수 출력
                    /*int a, cnt=0;
                    for (int i = 1; i <= 10; i++) {
                        scanf("%d", &a);
                        if (a % 2 == 0)
                            cnt++;
                    }
                    printf("%d", cnt);*/
                    //6. 5명의 성적을 입력 총점 평균
                    /*int i, score, sum = 0;
                    double avg;

                    for (i = 0; i < 5; i++) {
                        scanf("%d", &score);
                        sum += score;
                    }
                    avg = (double)sum / i;
                    printf("충점 : %d\n", sum);
                    printf("평균: %0.d\n", avg);*/
                    //7
                    /*int a = 2, i, j;
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++) {
            printf("%d", i + j);
                if (j == 5)
                    printf("\n");
        }*/
                    //8. 2~4단 구구단
                    /*  int i, j;
    for (i = 1; i <= 9; i++)
        for (j = 2; j <= 4; j++) {
            printf("%d * %d = %d", i, j, i*j);
            if (j == 4)
                printf("\n");
        }*/
    //1. 자연수 n을 입력받은만큼 "JUNGOL"을 출력해라
    /*
    int i, n;
    scanf("%d", &n);
    for (i == 1; i <= n; i++)
        printf("JUNGOL");
    */
    //2. 두개의 자연수를 입력받아 작은수부터 큰 수까지 출력
    /*
        int a, b, i=0;
    scanf("%d %d", &a, &b);
    if (a > b)
        for (i = b; i <= a; i++)
            printf("%d ", i);
    else
        for (i = a; i <= b; i++)
            printf("%d ", i);
            */
    //3. 정수를 입력받아 그 정수보다 작은 5의 배수의 합을 출력
    /*
    int n=0, i=0, max=0;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
        if (i % 5 == 0)
            max += i;
    printf("%d", max);
    */
    //4. n개의 정수를 입력받아 평균 출력
    /*
        int a=0, b=0, i=0, max=0;
        scanf("%d", &a);
        for (i = 1; i <= a; i++)
        {
            scanf("%d", &b);
            max += b;
        }
        printf("%.2f", (float)max / a);
    */
    //5.10개의 수들중 짝수의 개수와 홀수의 개수 출력
    /*
      int n, a, b, i;
    for (i = 1; i <= 10; i++) {
        scanf("%d", &n);
        if (n % 2 == 0)
            a++;
        else
            b++;
    }
    pritnf("even : %d\nodd : %d", a, b);
    */
int a, b, n, i, sum, avg;
scanf("%d %d", &a, &b);
if (a > b) {
    for(i=b; i<=a; i++)
        if()
}

        

    
       

    return 0;
}