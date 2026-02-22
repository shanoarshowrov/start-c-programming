#include<stdio.h>
int sum(int a,int b)
    {
   return a+b;
    }
int sub(int a,int b)
    {
        return a-b;
    }
int main()
{
  int a,b;
  printf("Enter a Number : ");
  scanf("%d",&a);
  printf("Enter Secound Number : ");
  scanf("%d",&b);
  printf("Sum or Sub Multiply value is = %d",sum(a,b)*sub(a,b));

}