#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],revStr[100];
    int i,j;
 
    printf("Enter a string: ");
	scanf("%[^\n]s",str);
    j=0;
    for(i=(strlen(str)-1); i>=0;i--)
        revStr[j++]=str[i];
     
    
    revStr[j]='\0';
 
    printf("\nOriginal String is: %s",str);
    printf("\nReversed String is: %s",revStr);
 
    return 0;
}