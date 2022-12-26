#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
printf("enter the string");
gets(str);
int l=0;
int h = strlen(str) - 1;
while(h>l)
{
    if(str[l++] != str[h--])
    {
        printf(" %s is Not palindrome",str);
        return 0;
    }
    
 
}
    printf(" %s is Palindrome",str);
return 0 ;
}