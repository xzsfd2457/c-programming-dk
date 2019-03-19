#include<stdio.h>
int main()
{
int arr[10],size,index;
int index1;
scanf("%d",&size);
   for(index=0;index<size;index++)
        scanf("%d",&arr[index]);
for(index=0;index<size;index++)
     {
     for(index1=index+1;index1<size;index1++)
            {

                 if(arr[index]==arr[index1])
                      printf("%d ",arr[index]);

                     // getchar();
            }

     }


return 0;
}
