#include<stdio.h>
int main ()
{int a;
int w,l;
int g,dot,m;
int sum,i,n;
int side, area;
 printf("\n Welcome To Anish Calculator Zone\n Press 1 to calcule area of a rectangle \n Press 2 finding sum of nth integers \n Press 3 for sum of an integer value \n Press 4 to calculate area of a square");
 scanf("%d",&a);

switch(a) {

//Case 1//
case 1:

printf("\n Enter value of w and l: ");
scanf("%d%d",&w,&l);
printf("\n Area of the square is : %d unit",w*l);
break;

//case 2//

case 2:
printf("\n Enter The value of n"); 
scanf("%d",&n);
sum = 0;
for ( i = 0; i <= n; i++)
{
  
  sum = sum + i;
  
}
printf("\n sum is :%d",sum);
break;

//case 3//
case 3:
printf("\n Enter a number");   
scanf("%d",&m);   
dot=0; 
g=m;
while(m!=0)  
{    
dot=dot+m%10;
m=m/10;
 
}    
printf("Sum is=%d",dot);    
break;

//case 4//
case 4:
printf("\nEnter the Length of Side : ");
scanf("%d", &side);
area = side * side;
printf("\nArea of Square : %d", area);
break;

// End of the Program //

default:
printf("\nEnter Correct Option ! | Thanks For Using My calculator");

return 0;
}
}
// Created By Anish //