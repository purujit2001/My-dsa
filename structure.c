#include <stdio.h>
#include <string.h>
int main()
{
struct student
{
    int id,marks;
    char name[25];
};
struct student a;
a.id = 1;
a.marks = 100;
strcpy(a.name,"Subham");
printf("\n %d %d %s",a.id,a.marks,a.name);



return 0;
}