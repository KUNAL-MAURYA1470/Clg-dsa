#include <stdio.h>
int stringLength(char* txt)
{
	int i=0,count=0;
	
	while(txt[i++]!='\0'){
		count+=1;
	}
	
	return count;
}
int main()
{
	char str[100]={0};
	int length;

	printf("Enter any string: ");
	scanf("%s",str);
	
	/*call the function*/
	length=stringLength(str);
	
	printf("String length is : %d\n",length);

	return 0;
}