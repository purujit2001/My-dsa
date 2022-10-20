#include<stdio.h>
int input(int,int);
int func(int,int);
int main()
{
    int x,y,sum;
    printf("\n Enter 2 numbers:");
    input(x,y);
    sum=func(x,y);
    printf("\n SUM is: %d",sum);
}
int input(int a,int b)
{
    scanf("%d %d",&a,&b);
   return (a,b);
}
int func(int a,int b)
{
    int add=a+b;
    return(add);
}