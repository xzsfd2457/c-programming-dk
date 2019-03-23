#include<stdio.h>
int main()
{
	long num,ctr;
	scanf("%d",&num);
	long long fact=1;//intialize should be 1 
for(ctr=1;ctr<=num;ctr++)
    fact=fact*ctr;
	
printf("%lld",fact);
	
	
	return 0;
}
