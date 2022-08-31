#include<stdio.h>
void printodd(int);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printodd(n);
    return 0;
}
void printodd(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("%d\n",(2*i-1));
    }
}