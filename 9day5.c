#include<stdio.h>
int main()
{
int num,c=0,d=0;
scanf("%d",&num);
while(num>0)
{
if(num%2==0)
{
    num=num/2;
    c++;
}

 else if (num%2!=0)

 {
    num=num-1;
    d++;
 }
}
return(c+d);

return 0 ;
}