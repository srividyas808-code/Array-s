#include<stdio.h>
int main()
{
    int i,n,x;
    printf("enter array size:");
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++)
    {
        printf("enter the %d  elements of array:",i);
        int val;
        scanf("%d",&val);
        arr[i]=val;
    }
    printf("enter the element of x:");
    scanf("%d",&x);                     //x=2
    int flag=-1;
    for(i=0;i<n;i++)                   // n=2 i=0 0<2 i=1 1<2 i=2 2<2
    {                                   //arr[n]={1,2}
        if(arr[i]==x)                       
        {                               
            flag=i;                     //flag=0
        }
    }
    if(flag==-1)                         
    {
         printf("element not found in the array");
    }
    else
    {
        printf("element found at %d",flag);
    }
    
}
