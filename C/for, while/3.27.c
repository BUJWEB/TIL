//������ 2��~9��
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
//�γ����� ���󶱺���(����ҽ�2 �γ��ҽ�1)�� �и��ڶ� ����̶� ���������̶� ���̶� �Ҽ��� ���縮

//����1) 1+2+3+...+n�� ����� ���ʷ� 5000���� Ŀ�� ���� n�� ���Ͻÿ�.
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
//����2) 1�̻� 20�̸��� ������ ����ϵ�, 2�� ����� 3�� ����� ��¿��� �����Ͻÿ�.
/*#include<stdio.h>
int main(){
    int i;
    for (i = 1; i <= 20; i++)
        if (i % 2 != 0 && i % 3 != 0)
            printf("%d\n", i);
}
*/
//����3) �������� ����ϵ� ¦�� ��(2��,4��,6��,8��)�� ��µǵ�������.
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
����4) �������� �����ϴ� ���A�� Z�� ���ϴ� ���α׷��� �ۼ��غ���.
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
    //1. 10������ �Է¹��� ������ŭ "C��� ���α׷���" ��� 
   /* int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
        printf("c��� ���α׷���\n");*/
        //2. A~Z ���
        /*    char ch=64;
        for (int i = 1; i <= 26; i++)
            printf("%c\n", ch + i);*/
            //3. 1~20 Ȧ�� ���
             /*   int i;
            for (i = 1; i <= 20; i++)
                if (i % 2 == 1)
                    printf("%d", i);*/
                    //4. 1���� �Է¹��� �������� �� ���
                    /*  int a, max;
                    scanf("%d", &a);
                    for (int i = 1; i <= a; i++)
                        max = max + i;
                    printf("%d", max);*/
                    //5. 10���� ���� �Էƹް� ¦�� �� ���
                    /*int a, cnt=0;
                    for (int i = 1; i <= 10; i++) {
                        scanf("%d", &a);
                        if (a % 2 == 0)
                            cnt++;
                    }
                    printf("%d", cnt);*/
                    //6. 5���� ������ �Է� ���� ���
                    /*int i, score, sum = 0;
                    double avg;

                    for (i = 0; i < 5; i++) {
                        scanf("%d", &score);
                        sum += score;
                    }
                    avg = (double)sum / i;
                    printf("���� : %d\n", sum);
                    printf("���: %0.d\n", avg);*/
                    //7
                    /*int a = 2, i, j;
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= 5; j++) {
            printf("%d", i + j);
                if (j == 5)
                    printf("\n");
        }*/
                    //8. 2~4�� ������
                    /*  int i, j;
    for (i = 1; i <= 9; i++)
        for (j = 2; j <= 4; j++) {
            printf("%d * %d = %d", i, j, i*j);
            if (j == 4)
                printf("\n");
        }*/
    //1. �ڿ��� n�� �Է¹�����ŭ "JUNGOL"�� ����ض�
    /*
    int i, n;
    scanf("%d", &n);
    for (i == 1; i <= n; i++)
        printf("JUNGOL");
    */
    //2. �ΰ��� �ڿ����� �Է¹޾� ���������� ū ������ ���
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
    //3. ������ �Է¹޾� �� �������� ���� 5�� ����� ���� ���
    /*
    int n=0, i=0, max=0;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
        if (i % 5 == 0)
            max += i;
    printf("%d", max);
    */
    //4. n���� ������ �Է¹޾� ��� ���
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
    //5.10���� ������ ¦���� ������ Ȧ���� ���� ���
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