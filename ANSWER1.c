#include<stdio.h>
float area(int);
int main()
{
    int r;
    float a;
    printf("enter the radious of circle");
    scanf("%d",&r);
    a= area(r);
    printf("area of circle is %f",a);
    return 0;
}
float area(int b)
{
  
  
  return 3.14*b*b;
}