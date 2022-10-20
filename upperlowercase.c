#include<stdio.h>
int is_lower(char);
int main(void)
{
    char x;
    printf("\n Enter a character:");
    x=getchar();
    if(is_lower(x))
    {
    printf("\n %c is in lower case",x);
    }
    else 
    printf("\n %c is in upper case",x);

}
int is_lower(char ch)
{
    if(ch>='a' && ch<='z')
    
    return(1);
    else 
    {
        return(0);
    }
    
    
}
