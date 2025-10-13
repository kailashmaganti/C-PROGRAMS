#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter number of elements ");
    scanf("%d",&n);
    int a[n];
    printf("enter marks");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("sum= %d",sum);
    return 0;
}