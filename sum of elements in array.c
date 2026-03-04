#include <stdio.h>
int main()
{
   int n,i,sum=0;
   printf("array size:");                   // array size=5
   scanf("%d",&n);                          // n=5
    int arr[n];                              // arr[ ]    
   for(i=0;i<n;i++)                             //i=0 0<5 i=1 1<5 i=2 2<5 i=3 3<5 i=4 4<5
   {
       printf("enter %d elements of array",i); 
       int val;
       scanf("%d",&val);  
       arr[i]=val;                         //arr[0]=1 arr[1]=2 arr[2]=3 arr[3]=4 arr[4]=5
   }
    for(i=0;i<n;i++)                          //i=0   0=0+1 i=1  1+2 i=2 3+3 i=3 6+4 i=4 10+5
    {
        sum=sum+arr[i];
    }
    printf("sum of elements of array %d",sum);              
}   
    
