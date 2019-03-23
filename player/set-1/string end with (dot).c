#include<stdio.h>
int main()
{
char str[1000];
scanf("%s",str);
int index=0;
while(str[++index]);
str[index]='.';
str[index+1]=NULL;

	printf("%s",str);
	
	return 0;
}
