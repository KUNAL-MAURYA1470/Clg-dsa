#include <stdio.h>
#include <ctype.h>
int stringCmp (char *s1,char *s2)
{
    int i=0;
    for(i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]!=s2[i])
            return 1;
    }
    return 0;
}
 int main()
{
    char str1[100],str2[100];
 
	printf("Enter  string 1 : ");
    scanf("%[^\n]s",str1);//read string with spaces

    getchar(); //to read enter after first string
 
    printf("Enter  string 2 : ");
    scanf("%[^\n]s",str2);//read string with spaces
 
    if(!stringCmp(str1,str2))
        printf("\n stringCmp  :String are same.");
    else
        printf("\n stringCmp  :String are not same.");
 
    printf("\n");
    return 0;
}