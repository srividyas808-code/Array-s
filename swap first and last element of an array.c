#include<stdio.h>
int main()
{
   int i,n;
   printf("enter array size:");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
       printf("enter the %d elements of array",i);
       int val;
       scanf("%d",&val);
       arr[i]=val;
   }
   i=0;
   int j=n-1;
   {
       int s=arr[i];
       arr[i]=arr[j];
       arr[j]=s;
       i++;
       j--;
   }
   for(i=0;i<n;i++)
   {
       printf("%d element of an array is %d\n",i,arr[i]);
   }
}
