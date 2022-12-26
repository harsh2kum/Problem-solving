#include<stdio.h>
void main (){
    int a , b , c;
    printf("Enter the sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("Equilateral Trianlge");
    } 
    else if(a==b && b!=c || a==c)
    {
        printf("Isosceles Triangle");
    }
    else 
    { 
        printf("Scalene Triangle");
    }

}