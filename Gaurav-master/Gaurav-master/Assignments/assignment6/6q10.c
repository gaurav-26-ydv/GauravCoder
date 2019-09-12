//Picture Printing Program 2 q10
#include<stdio.h>
int main()
{
int i,j;
for(j=1;j<=5;j++)
{
for(i=1;i<=12-2*j;i++)
printf("%c",65);
printf("\n");
}
}