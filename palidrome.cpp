# include<stdio.h>
# include <string.h>
int main()
{
	int p,q,t,i,c=0,n;
	char str[1000]="MALAYALAM";
	n=strlen(str);
	for(i=0;i<n/2;i++){
	
	if(str[i]==str[n-i-1])
	c++;
}

if(c==i)
printf("PALINDROME");
else
printf("NOPE");
}
