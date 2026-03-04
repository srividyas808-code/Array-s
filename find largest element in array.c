#include <stdio.h>
int main()
{
   printf("enter array size:");
   int i,n;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
       int val;
       printf("enter %d elements of array:",i);
       arr[i]=val;
       scanf("%d",&arr[i]);
   }
   int large=arr[0];                        //large=arr[0] 
   for(i=1;i<n;i++)                         //i=1 1<5   i=2 1<5 
   {
        if(arr[i]>large)                             //arr[1]>arr[0]. arr[2]>arr[0]   30>20 
        {
           large=arr[i];
        }
   }
   printf("largest element is %d",large);
}  
   
    
