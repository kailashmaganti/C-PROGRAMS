#include<stdio.h>
int main()
{
    int n;
    int count1=0,count2=0;
    printf("enter number of elements ");
    scanf("%d",&n);
    int a[n];
    printf("enter values");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
       if(a[i]%2==0)
       {
        count1++;
       }
    }
    for(int i=0;i<5;i++)
    {
       if(a[i]%2!=0)
       {
        count2++;
       }
    }
    printf("even=%d",count1);
    printf("odd=%d",count2);
    return 0;
}