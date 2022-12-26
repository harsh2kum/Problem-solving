#include<stdio.h>
int main()
{
char str[1000];
int i;
int word ;
printf("Enter the paragraph\n");
//scanf function won't work here
gets(str);
i=0;
word=1;
while(str[i] !='\0')
{
if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
{
    word++;
}
i++;
}
printf("The total number of words in a string is :%d",word-1);
return 0 ;
}