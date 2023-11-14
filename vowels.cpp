# include<stdio.h>
# include <string.h>
int main()
{
	char str[]="SIBANI";
	strlwr(str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
	
	if (str[i] =='a'||str[i]=='e'||str[i]=='i'||str[i]=='o')
	    printf("%c",str[i]);
	}
	
}
