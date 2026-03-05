#include<stdio.h>
int main()
{
    int i,n;
    printf("enter array size:");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(i=0;i<n;i++)
    {
        printf("enter the %d elements of array",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)                 //i=0; 0<4 
    {
        printf("%d ",arr1[i]);          
    }
    for(i=0;i<n;i++)                    //i=0 0<4 1<4 2<4 3<4 4<4
    {
        arr2[i]=arr1[i];                //arr2[0]
    }
}
