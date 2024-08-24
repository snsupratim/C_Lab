  #include<stdio.h>
  #include<string.h>
  #include<ctype.h>
  int main()
  {
  	int i,count=0;
  	char c,s[50];
  	puts("\n enter a statment= ");
  	gets(s);
  	for(i=0;s[i]!='\0';i++)
  	{
  		c=toupper(s[i]);
  		switch(c)
  		{
  			case 'A':
  				
  				case 'E':
  					
  					case 'I':
  					
  						case 'O':
  						
  							case 'U':
  							count++;
  								
  								break;
  						
		  }
	  }
	 
	  printf("\n the frequency of vowels into that statement is %d",count);
	  
	  return 0;
  }
