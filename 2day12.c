#include<stdio.h>
#include<conio.h>
int main ()
{
    int i , j , sp;
    for(i=0;i<=6;i++)
    {
        for(j=1;j<=6-i;j++)
        {
           printf("%d",j); 
        }
        
    for ( sp=1 ;sp<=i*2-1;sp++ )
      printf(" ");
    
    for ( int k=6-i;k>=1;k--)
    {
        if(k==6);
        else
        printf("%d",k);
    }
    printf("\n");
    }
    return 0;
}