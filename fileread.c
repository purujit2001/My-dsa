#include<stdio.h>
int main()
{
FILE *ptr = NULL;
char string[40]="\nHello World";
ptr = fopen("file.txt","w");
fprintf(ptr,"%s",string);




}

// a = appending
// r = read
// w = write
// r+ = read and write