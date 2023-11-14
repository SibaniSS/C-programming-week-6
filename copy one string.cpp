# include<stdio.h>
int main()
{
	int n;
	printf("How many character are u going to type");
	scanf("%d",&n);
	char str[n],str1[n];
	
	int i;
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	str1[i]=str[i];
	printf("%s",&str1);
}
