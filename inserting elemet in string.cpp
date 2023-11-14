# include<stdio.h>
# include<string.h>
int main()
{
	int i,n;
	char str[]="SBANI";
	n=strlen(str);
	int pos=1;
	char ch='I';
	
	for(i=n;i>pos;i--){
	
	    str[i]=str[i-1];
	    
	}
	str[i]=ch;
	n++;
	printf("%s",str);
}
