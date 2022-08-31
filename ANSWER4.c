#include<stdio.h>
void printn(int);
int main()

{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printn(n);
    return 0;
}
void printn(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("%d\n",i);
    }
}