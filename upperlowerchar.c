#include<stdio.h>
int main()
{ char x;
printf("\nEnter a character : ");
x=getchar();
if (x>='a' && x<='z')
{
  printf("\nThe character is lower case");

}
else if (x>='A' && x<= 'Z')
{
    printf("\nThe character is Upper case");

}
else
    {
        printf("The character you have entered is not an alphabet.");
    }


    return 0;
}