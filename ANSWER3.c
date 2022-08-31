#include<stdio.h>
int evnorodd(int);
int main()
{
    int a,b;
    printf("enter a number:");
    scanf("%d",&a);
     b=evnorodd(a);
     if(b==1)
     printf("%d is even ",a);
     else
     printf("%d is odd",a);
}
int evnorodd(int c)
{
    if(c%2==0)
    return 1;
    else
    return 0;
}