# include<stdio.h>
# include<string.h>
int main()
{
	int i;
	char word;
	int flag=0;
	char str[]= "HELLO";
	scanf("%c",&word);
	int n;
	n=strlen(str);
	for(i=0;i<=n;i++)
	{
		if (str[i] == word)
		   printf("The letter occurs at %d index",i);
		   break;
		   flag=1;
	}
	if (flag==0)
	printf("No such element");
}
