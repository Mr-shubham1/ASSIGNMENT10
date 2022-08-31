#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("%d", fact(a));
    return 0;
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}