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
    i=0;                    //i=0 j=n-1 i=0 j=5-1 i=1 j=3 i=2 j=2 i=3 j=1 
    int j=n-1;
   while(i<=j)              //i<=j  0<=4 1<=3 2<=2.  
   {
       int t=arr[i];            // t=arr[0] that is t=10  t=arr[1] that is t=20  arr[2]=t that is t=30
       arr[i]=arr[j];           //arr[0]=arr[4] that is t=arr[4] that is t=50 arr[1]=arr[3] 20=40 arr[2]=arr[2] 30=30
        arr[j]=t;               //arr[4]=t that is 50=t     arr[3]=t t=20 arr[2]=30
       i++;
       j--;
   }
    for(i=0;i<n;i++)
    {
        printf("%d is element of array %d\n",i,arr[i]);
    }
}
