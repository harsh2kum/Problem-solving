#include<stdio.h>
int main()  
{  
    int num = 1,i, limit;  
    int sum = 0, fact;  
  
    printf("Enter the number of terms\n");  
    scanf("%d", &limit);  
  
    while(num <= limit)  
    {  
        fact = 1;  
        for(i=1;i<= num;i++)  
        {  
            fact = fact *i;  
        } 
  
        sum = sum + fact;  
  
        num++;  
    }  
  
    printf("Sum of %d terms of series is %d\n", limit, sum);  
  
    return 0;  
}  