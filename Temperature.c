#include<stdio.h>
void main()
{
    float t ;
    printf("Enter the Temperature in Centigrade");
    scanf("%f",&t);
    if(t<0)
    {
        printf("FREEZING WEATHER");
    }
    else if (t>=0 && t<=10)
    {
        printf("VERY COLD WEATHER");
    }
    else if (t>10 && t<=20)
    {
        printf("COLD WEATHER");
    }
    else if (t>20 && t<=30)
    {
        printf("NORMAL IN TEMPERATURE");
    }
    else if(t>30 && t<=40)
    {
        printf("ITS HOT");
    }
    else 
    {
        printf("ITS VERY HOT");
    }

}