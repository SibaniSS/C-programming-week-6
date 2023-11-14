# include<stdio.h>
# include <string.h>
int main()
{
	int p,q,t,i,c=0,n,j;
	int flag;
	char str[]="HELLO";
	char str1[]="HELLO";
	n=strlen(str);
	for(i=0,j=0;i<n,j<n;i++,j++){
	if(str[i]==str1[j])
	printf("Yes they are equal");
	flag=1;
	break;
}
if(flag==0)
printf("No");
}

