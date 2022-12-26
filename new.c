#include<stdio.h>
int main()
{
int i , j ;
int n ;
scanf("%d",&n);
for(i=1;i<=4;i++)
{
    for(j=1;j<=n-1;j++)
    printf("%d",n);
    n++;
}
printf("\n");

return 0 ;
}