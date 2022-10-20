#include<stdio.h>
int sum(int,int);
int main()
{int a,b;
printf("Enter two integer Value");
scanf("%d %d",&a,&b);
printf("The sum is : %d",sum(a,b));
}
int sum(int x,int y)
{
return(x+y);
}