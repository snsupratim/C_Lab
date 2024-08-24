#include<stdio.h>
#define s 41
int main()
{
	char a[s],ch,character;
	int i,total=0,occr=0;
	printf("enter the string of length<=%d terminted by enter key\n",s-1);
	ch=getche();
	while(ch!='\r')
	{
		a[total++]=ch;
		ch=getche();
	}
	printf("\n \n enter char to be checked for occurance: ");
	scanf("%c",&character);
	printf("\n\n inputed stream of charatcers is: \n\n");
	for(i=0;i<total;i++)
	{
		printf("%c",a[i]);
		if(a[i]==character)
		occr++;
	}
	printf("\n\n character %c has occuerd %d time(s)\n",character,occr);
	
	return 0;
}
