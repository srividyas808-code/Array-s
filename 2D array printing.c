#include <stdio.h>
int main()
{
    int rows,col;
    printf("enter size of rows:");
    scanf("%d",&rows);
    printf("enter size of column:");
    scanf("%d",&col);
    int i,j,arr[rows][col];
    if(rows>0&&col>0)
    {
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter %d %d elements",i+1,j+1);
            int val;
            scanf("%d",&val);
            arr[i][j]=val;
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    }
    else if(rows<0)
        {
             printf("The size of row %d is negative so try again",rows);
        }
    else
        {
            printf("The size of column %d is negative so try again",col);
        }
}
