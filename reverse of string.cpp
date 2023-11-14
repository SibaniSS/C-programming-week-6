# include<stdio.h>
# include <string.h>
int main()
{
	int p,q,t,i;
	char str[1000]="Hello";
	char str1[1000];
	int len=strlen(str);
	for(i=0;i<len/2;i++)
	{
	t=str[i];
	str[i]=str[len-i-1];
	str[len-i-1]=t;
}
printf("%s",str);
}
