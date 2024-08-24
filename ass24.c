#include <stdio.h>

int main()
{
	FILE *f1,*f2;
	char s[50],s1[51];
	//Writing to Data1.txt
	f1 = fopen("Data1.txt","w");
	if(f1 == NULL)
		return 1;
	else
	{
		printf("\nEnter text you want to write: ");
		gets(s);
		fputs(s,f1);
		fclose(f1);
	}
	
	//Copying from Data1.txt to Data2.txt
	
	f1 = fopen("Data1.txt","r");
	f2 = fopen("Data2.txt","w");
	
	if(f1 == NULL || f2 == NULL)
		return 1;
	else
	{
		while(fgets(s1,51,f1) != NULL) 
		{							
			fputs(s1,f2);	
		}
		fclose(f1);
		fclose(f2);
	}
	return 0;			
}
