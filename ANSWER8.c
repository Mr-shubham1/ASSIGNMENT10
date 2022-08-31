#include<stdio.h>
int fact(int);
int main()
{
    int n,r,c;
    printf("enter two numbers:");
    scanf("%d %d",&n,&r);
    c=fact(n)/fact(n-r);
    printf("value of ncr is %d",c);
    return 0;
}
int fact(int a)
{
    int i,f=1;
    for(i=1;i<=a;i++)
    {
       f=f*i;
    }
    return f;
}