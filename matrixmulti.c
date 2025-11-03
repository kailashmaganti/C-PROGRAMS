#include<stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter size of matrix A (rows cols): \n");
    scanf("%d%d", &r1, &c1);
    printf("Enter size of matrix B (rows cols): \n");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2) 
    {
        printf("Matrix multiplication not possible \n");
    } 
    else 
    {
        int a[r1][c1];
        int b[r2][c2];
        int p[r1][c2];

        printf("Enter elements of matrix A: \n");
        for (int i=0; i<r1; i++)
        {
            for (int j=0; j<c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter elements of matrix B: \n");
        for (int i=0; i<r2; i++)
        {
            for (int j=0; j<c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for (int i=0; i<r1; i++)
        {
            for (int j=0; j<c2; j++) 
            {
                p[i][j] = 0;
                for (int k=0; k<c1; k++)
                {
                    p[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("The product of the two matrices is: \n");
        for (int i=0; i<r1; i++) 
        {
            for (int j=0; j<c2; j++)
            {
                printf("%d ", p[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
