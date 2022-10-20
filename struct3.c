#include<stdio.h>
#include<string.h>
struct record
{
    int id;
    char name[20];
    int marks;
};
int main()
{ struct record a,b;
printf("\nEnter Id ");
scanf("%d",&a.id);
fflush(stdin);
printf("\nEnter Name: ");
gets(a.name);
printf("\nENter Marks: ");
scanf("%d",&a.marks);
b.id = a.id;
b.marks = a.marks;
strcpy(b.name,a.name);
printf("Copied Records : %d %s %d",b.id,b.name,b.marks);


return 0;

}
