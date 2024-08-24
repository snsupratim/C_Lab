#include<stdio.h>
#define s 42
int main()
{
	char string1[s],string2[s],r_string[s];
	int len1,len2,i;
	len1=len2=0;
	printf("enter the first string<= %d\n\n",s-2);
	gets(string1);
	for(i=0;string1[i]!='\0';i++)
	{
		len1++;
	}
	printf("\n the length of first string is = %d\n",len1);
	printf("enter second string <= %d\n\n",s-2);
	gets(string2);
	for(i=0;string2[i]!='\0';i++)
	{
		len2++;
	}
	for(i=0;i<len1;i++)
	{
		r_string[i]=string1[i];
	}
	for(i=0;i<len2;i++)
	{
		r_string[len1+i]=string2[i];
	}
	r_string[len1+len2]='\0';

printf("\n the resultant string is : %s \n\n ",r_string);
return 0;
}
