 #include<stdio.h>
 #include<string.h>
 #define s 40
 #define t 40
 int main()
 {
 	char string1[s],string2[t];
 	
 	puts("enter first string: ");
 	gets(string1);
 	puts("\n enter second string : ");
 	gets(string2);
 	// concatenating
 	
 	strcat(string1,string2);
 	printf("resultant string is:%s\n",string1);
 	return 0;
 	
 }
