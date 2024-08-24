//#include <stdio.h>
//#include<string.h>
////#include <ctype.h>
//
//int main() {
//    char str[100];
//    int i, j, len;
//    printf("Enter a string: ");
//    fgets(str, 100, stdin);
//    len = strlen(str) - 1;
//    i = 0;
//    j = len - 1;
//    while (i < j) {
//        if (tolower(str[i]) != tolower(str[j])) {
//            printf("The string is not a palindrome\n");
//            return 0;
//        }
//        i++;
//        j--;
//    }
//    printf("The string is a palindrome\n");
//    return 0;
//}

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{
	int i;
	char str[100];
	bool ispallindrome=true;
	printf("enter a string: ");
	scanf("%s",str);
	int len=strlen(str);
	for(i=0;i<len/2;i++)
	{
		if((str[i])!=str[len-i-1])
		{
			ispallindrome=false;
		}
	}
	if(ispallindrome)
	{
		printf("%s is a pallindrome \n",str);
	}
	else
	{
		printf("%s is not a spallindrome\n",str);
	}
	return 0;
}

