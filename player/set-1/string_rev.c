#include<stdio.h>
int main()
{
	char str[10000];
	char copy;
	int left,right,index=0;
     scanf("%s",str);
	while(str[++index]);
         	//printf("%d\n",index);
    right=index-1,left=0;
	while(left<right)
	   {
	   	copy=str[left];
	   	str[left]=str[right];
	   	str[right]=copy;
	   	left++;
	   	right--;
	   }	
	printf("%s",str);
	
	return 0;
}
