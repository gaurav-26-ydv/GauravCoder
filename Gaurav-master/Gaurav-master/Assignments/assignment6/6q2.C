//Picture printing program 2 q2
#include<stdio.h>
int main()
{
int i,j;
for(j=1;j<=5;j++)
{
for(i=1;i<=6-j;i++)
printf("%c",71-j-i);
printf("\n");
}
}