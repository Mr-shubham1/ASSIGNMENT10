#include<stdio.h>
float simpleinterest(int,int,int);
int main()
{
    int si,p,r,t;
    printf("enter the value of p,r,t");
    scanf("%d %d %d",&p,&r,&t);
    printf("simple interest is %f",simpleinterest(p,r,t));
    return 0;
}
float simpleinterest(int a,int b,int c)
{
    return((a*b*c)/100.0);
}