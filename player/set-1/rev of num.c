#include<stdio.h>
int main()
{
	long num,base=1,rev=0;
     	scanf("%d",&num);
    while((num/base))
      {
      	rev=(rev*10)+(num/base)%10;
      	base=base*10;
	  }
	printf("%d",rev);
	
	
	return 0;
}
