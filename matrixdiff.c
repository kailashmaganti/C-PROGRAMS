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
    int sum[r1][c1];
    if(r1==r2 && c1==c2)
    {
        printf("enter the elements of matrix a \n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter the elements of matrix b \n ");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                sum[i][j]=a[i][j]-b[i][j];
            }
        }
        printf("the sum is \n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("%3d",sum[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("matrix subtraction is  not possible because not of same order");
    }
    return 0;

}