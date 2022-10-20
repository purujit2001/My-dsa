#include<stdio.h>
factorial(int i){
    if (i<=1)
    {
        return 1;
    }
    return i*factorial(i-1);
    
}
int main(){
    int i;
    printf("Enter the value of i:");
    scanf("%d", &i);
    printf("Factorial of %d is %d", i, factorial(i));
    return 0;
}
