#include<stdio.h>
int main ()
{
    int a[20], i;
    scanf("%d", &i);
    switch (a[i])
    {
    case 0:
    case 18:
    printf("0");
    case 1:
    case 3:
    case 11:
    case 19:
    printf("1");  break;
    case 2:
    case 12:
    case 20:
    printf("2");  break;
    case 5:
    case 13:
    printf("3"); break;
    case 6:
    case 14:
    printf("4");  break;
    case 7:
    case 15:
    printf("5");  break;
    case 8:
    case 16:
    printf("6");  break;
    case 9:
    case 17:
    printf("7");  break;
    
        break;
    
    default: printf("뭘 누른거야");
        break;
    }
    
}