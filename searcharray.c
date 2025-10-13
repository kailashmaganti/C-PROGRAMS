#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number of elements ");
    scanf("%d",&n);
    int a[n];
    printf("enter values");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int target;
    printf("enter target to be seaeched");
    scanf("%d",&target);

    for(i=0;i<n;i++)
    {
       if(a[i]==target)
       {
        printf("target found at index %d",i);
        break;
       }
    }
    if (i==n)
    {
        printf("%d Not Found!!\n",target);
    }
    return 0;
}