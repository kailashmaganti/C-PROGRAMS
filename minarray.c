#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements ");
    scanf("%d",&n);
    int a[n];
    printf("enter values");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];

    for(int i=0;i<n;i++)
    {
       if(min>a[i])
       {
        min=a[i];
       }
    }
    printf("%d",min);
    return 0;
}