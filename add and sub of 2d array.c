#include<stdio.h>
void read_element(int n,int m,int arr[n][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int val;
            printf("enter %d %d elements:",i,j);
            scanf("%d",&val);
            arr[i][j]=val;
        }
    }
}
void matrix_print(int n,int m,int arr[n][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int row_input()
{
    int rows;
    printf("enter the size of row:");
    scanf("%d",&rows);
    return rows;
}
int col_input()
{
    int col;
    printf("enter the size of col:");
    scanf("%d",&col);
    return col;
}
void add_elements(int n,int m,int arr1[n][m],int arr2[n][m])
{
    printf("addition of two matrices is:\n");
    int ans[n][m];
    int r=n;
    int c=m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             int val=arr1[i][j]+arr2[i][j];
             ans[i][j]=val;
        }
    }
    matrix_print(r,c,ans);
}
void subtract_elements(int n,int m,int arr1[n][m],int arr2[n][m])
{
    printf("subtraction of two matrices is:\n");
    int ans[n][m];
    int r=n;
    int c=m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int val=arr1[i][j]-arr2[i][j];
            ans[i][j]=val;
        }
    }
    matrix_print(r,c,ans);
}
int main()
{
    int r1=row_input();
    int c1=col_input();
    int arr1[r1][c1];
    read_element(r1,c1,arr1);
    matrix_print(r1,c1,arr1);
    int r2=row_input();
    int c2=col_input();
    int arr2[r2][c2];
    read_element(r2,c2,arr2);
    matrix_print(r2,c2,arr2);
    if(r1==r2&&c1==c2)
    {
        add_elements(r1,c1,arr1,arr2);
    }
    else
    {
        printf("addition not possible\n");
    }
    if(r1==r2&&c1==c2)
    {
        subtract_elements(r1,c1,arr1,arr2);
    }
    else
    {
        printf("subtraction not possible\n");
    }
}
