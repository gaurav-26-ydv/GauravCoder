//Picture Printing Program 2 q11
#include<stdio.h>
int main()
{
int i,j;
for(j=1;j<=6;j++)
{
for(i=1;i<=j;i++)
printf(" ");
for(i=1;i<=7-j;i++)
printf("%c",64+i);
printf("\n");

}

}