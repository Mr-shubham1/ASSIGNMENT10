#include<stdio.h>
int ifpresent(int,int);
int main()
{
 int a,b,c;
 printf("enter a number:");
 scanf("%d",&a);
 printf("enter a digitL:");
 scanf("%d",&b);
  c=ifpresent(a,b);
  if(c==1)
  printf("%d contains the digit %d",a,b);
  else
  printf("%d does not contains the digit %d",a,b);
  return 0;
}
int ifpresent(int a,int b)
{
    while(a!=0)
    {
      if((a%10)==b)
      return 1;
      else
      a=a/10;

    }
}