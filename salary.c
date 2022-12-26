#include<stdio.h>
void main ()
{
   float BS, hra,da,pf;
    int totalsalary,allow;
    char ch;
    printf("Enter the  Basic salary");
    scanf("%f",&BS);
    printf("Enter the Grade\n");
    scanf("%s",&ch);
    
    if ( ch=='A')
    {
        allow=1700;
    }
    else if ( ch=='B')
    {
        allow = 1500;
    }
    else {
        allow=1300;
    }
    hra=BS*0.2;
    da=BS*0.5;
    pf=BS*0.11;
    
   
    totalsalary=BS+hra+da+allow-pf;
    printf("Total Salary is = %d",totalsalary);
    
}