  #include<stdio.h>
  #include<string.h>
  #include<ctype.h>
  int main()
  {
  	int i,count=0,x=0,y=0,z=0,m=0,n=0;
  	char c,s[50];
  	puts("\n enter a statment= ");
  	gets(s);
  	for(i=0;s[i]!='\0';i++)
  	{
  		c=toupper(s[i]);
  		switch(c)
  		{
  			case 'A':
  				x++;
  				break;
  				case 'E':
  					y++;
  					break;
  					case 'I':
  						z++;
  						break;
  						case 'O':
  							m++;
  							break;
  							case 'U':
  								n++;
  								
  								break;
  						
		  }
	  }
	  count=x+y+z+m+n;
	  printf("\n the frequency of vowels into that statement is %d",count);
	  printf("\n A=%d E=%d I=%d O=%d U=%d ",x,y,z,m,n);
	  
	  return 0;
  }
