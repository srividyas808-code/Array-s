#include <stdio.h>
int main()
{
    int n,i;
    printf("array size:");
    scanf("%d",&n);                     //  n=5 {  }
    int arr[n];                         //  arr[5]={10,20,30,40,50}
    for(i=0;i<n;i++)                    //  i=0 0<5 i=1 1<5 i=2 2<5 i=3 3<5 i=4 4<5
    {
        int value;                 
        printf("%d th element:",i);       
        scanf("%d",&value);             //  10 20 30 40 50
        arr[i]=value;                   //  arr[0]=10 arr[1]=20 arr[2]=30 arr[3]=40 arr[4]=50   
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}   
    
