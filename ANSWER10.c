#include<stdio.h>
void primefact(int);
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    primefact(a);
    return 0;
}
void primefact(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
       for(j=2;j<=(i-1);j++)
       {
        if((i%j)==0)
        break;
       }
       if(j==i)
       {
        int b;
        b=a;
        while((b%i)==0)
        {
            if((b% i)==0)
            printf("%d ",i);
        
            b=b/i;
        }
       }
    }
}