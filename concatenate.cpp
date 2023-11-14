# include<stdio.h>
int main()
{
	int i=0,j=0;
	char str1[]="Hello";
	char str2[]=" HI";
	while (str1[i]!='\0')
	i++;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		j++;
		i++;
	}
	str1[i]='\0';
	
	printf("The concantenated string is %s",str1);
}
