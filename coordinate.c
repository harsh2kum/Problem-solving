#include<stdio.h>
void main()
{
    int x , y;
    printf("Enter the value of X");
    scanf("%d",&x);
    printf("Enter the value of Y");
    scanf("%d",&y);
    if(x>0 && y>0)
    {
        printf("Point lies in : 1st Quadrant");
    }
    else if (x>0 && y<0)
    {
        printf("Point lies in : 2nd Quadrant");
    }
    else if (x<0 && y<0)
    {
        printf("Point lies in : 3rd Quadrant");
    }
    else 
    {
        printf("Point lies in : 4th Quadrant");
    }
}
