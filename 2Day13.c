#include<stdio.h>
int Rpattern(int n);
int main()
{
   int n ;
   printf("Enter the value of n:");
   scanf("%d",&n);
   Rpattern(n);
}
int Rpattern(n)
{
    if(n>0)
    {
    printf("%d\n",n);
    Rpattern(n-5);
    }
    printf("%d\n",n);
    
}

