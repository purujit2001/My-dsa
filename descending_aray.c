#include<stdio.h>
#define max 100
int main()
{
    int i,j,n,a[max],x;
    printf("Enter the size of array");
    scanf("%d", &n);
    printf("Enter the elemnt of the array");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
        for ( i = 0; i < (n-1); i++)
        {
            for ( j =i+1; j < n; j++)
            {
                if (a[i]<a[j])
                {
                    x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                }
                
            }
            
        }
        printf("The sortted array in descending order:");
        for ( i = 0; i < n; i++)
        printf("%d", a[i]);
        
        


}
