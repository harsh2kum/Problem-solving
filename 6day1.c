#include<stdio.h>
int main()
{
    int i ,n,m,t,j;
int a[10][10];
printf("Enter the Order of matrix");
scanf("%d%d",&n,&m);
printf("Enter the elements of the Matrix");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<n-1;i++)
{
    for(j=i;j<m;j++)
    {
       t=a[i][j];
       a[i][j]=a[j][i];
       a[j][i]=t;
    }
}

//reverse
for(i=0;i<n;i++)
{
    int k=n-1;
    for(j=0;j<m/2;j++)
    {
        int temp=a[i][j];
        a[i][j]=a[i][k];
        a[i][k]=temp;
        k--;
    }
}
printf("Rotated matrix is :");
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