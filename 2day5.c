#include<stdio.h>
#include<conio.h>
int main()
{
    int i , j ;
    char ch = 'A';
    for (i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
         printf("%c",ch+j-1);
      
        }
         printf("\n");
    }  
    
    getch();
   return 0;  
}