#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char s[50];
    puts("\nEnter a name: ");
    gets(s);
    printf("%c.",toupper(s[0]));
    for(i=1;s[i]!='\0';i++)
       if(s[i] == ' ' && s[i+1] != ' ')
                  printf("%c.",toupper(s[++i]));  
    return 0;
}
