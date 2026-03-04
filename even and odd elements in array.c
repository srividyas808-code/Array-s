#include <stdio.h>
int main()
{
   printf("enter the array size:");
   int i,n,even_count=0,odd_count=0;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
       int val;
       printf("enter %d elements of array",i);
       arr[i]=val;
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       if(arr[i]%2==0)
       {
           even_count++;
       }
       else
       {
          odd_count++;
       }
   }
   printf("total odd numbers %d",odd_count);
   printf("total even numbers %d",even_count);
               
}   
    
