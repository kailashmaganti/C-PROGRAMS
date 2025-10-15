#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter the number of rows and columns of matrix A \n");
    scanf("%d%d",&r1,&c1);
    printf("enter the number of rows and columns of matrix B \n");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1];
    int b[r2][c2];
    int product[r1][c1];
    if(c1!=r2)
    {
        printf("matrix multiplication not possible");
    }
    printf("enter values of matrix a");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter values of matrix b");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            product[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                product[i][j]=a[i][k]*b[k][j];
            }
        }
    }
    printf("the multiplication is \n ");
    for(int i=0;i<r1;i++)
    {
        for (int j=0;j<c2;j++)
        {
            printf("%4d",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
