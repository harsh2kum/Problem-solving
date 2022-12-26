#include<stdio.h>
int main()
{
int i ,n, j ;
int a[100];
printf("Enter the size of array\n");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
j=n-1;
for(i=0;i<n/2;i++)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    j--;
}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}

return 0 ;
}