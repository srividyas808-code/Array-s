#include <stdio.h>
int main()
{
   printf("enter the array size:");
   int i,n;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
       int val;
       printf("enter %d elements of array",i);
       arr[i]=val;
       scanf("%d",&arr[i]);
   }
       int small=arr[0];
       for(i=1;i<n;i++)
       {
           if(arr[i]<small)
           {
               small=arr[i];
           }
       }
       printf("smallest element is %d",small);
}   
    
