//Calculate Length of String
#include<stdio.h>
int main()
{
    char a[100];
    int length;
    printf("Enter a string to calculate its length\n");
    gets(a);
    length=strlen(a);
    printf("Length of string : %d\n",length);

   return(0);
}
