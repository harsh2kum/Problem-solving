#include<stdio.h>
void main()
{
    int a=0;
   
    for(int i =1 ; i<=4 ; i++)
    {
       for( int j =1; j <= i ; j++)
       {
        printf("%d",a+j);
        
       }
       a++;
       printf("\n");
    }
  
}