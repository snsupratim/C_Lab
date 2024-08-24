 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	char name[]="mastering the c language";
 	int i;
 	
 	clrscr();
 	i=0;
 	while(name[i]!='\0')
 	{
 		printf("%c",name[i]);
 		i++;
	 }
	 printf(" number of char ar %d",i);
	 getch();
	 return 0;
 }
