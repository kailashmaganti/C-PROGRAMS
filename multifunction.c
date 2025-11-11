#include<stdio.h>
void multiplicationtable(int n)
{

    for (int i = 1; i <= 10; i++)
    {
        printf("%d × %d = %d\n", n, i, n * i);
    }
}
int main()
{
    int x ;
    printf("enter a number");
    scanf("%d",&x);
    multiplicationtable(x);
    return 0;
}
