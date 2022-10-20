#include<stdio.h>
struct student
{
    int roll;
    char name[26];
    int marks;
};
int main()
{
    struct student a;
    printf("\n Enter name of student a - ");
    gets(a.name);
    printf("\n Enter roll no - ");
    scanf("%d",&a.roll);
    printf("\n Enter Marks - ");
    scanf("%d",&a.marks);
    printf("His name is %s roll is %d and marks - %d :",a.name,a.roll,a.marks);

}