# include<stdio.h>
int main()
{
	int i;
	char str[]="Hello";
	for(i=0;str[i]!='\0';i++);
	printf("The length is %d",i);
}
