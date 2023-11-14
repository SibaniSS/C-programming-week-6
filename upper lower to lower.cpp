# include <stdio.h>
int main()
{
	int i;
	char str[]="SIBANI";
	char str1[6];
	for(i=0;str[i]!='\0';i++)
	    {
		if (str[i]>= 65 && str[i]<=90)
		{
			str[i]=str[i]+32;  
		}
}
printf("%s",str);
}
