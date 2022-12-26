#include<stdio.h>
int main()
{
int i , j ,n,m ;
int a[100][100];
printf("Enter the size of array");
scanf("%d%d",&n,&m);
printf("Enter the elements of array");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Input Array is :\n");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}


return 0 ;
}