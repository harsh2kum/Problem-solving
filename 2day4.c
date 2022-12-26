#include<stdio.h>
int main()
{
int k=0 , i ,j ;
char c;
for(i=65;i<=68;i++)
{
    for(j=65;j<=i;j++)
    {
    printf("%c",j+k);
    }

k++;

printf("\n");


}
return 0 ;
}