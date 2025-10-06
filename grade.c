#include<stdio.h>
int main()
{
    float p ; 
    printf("enter the percentage");
    scanf("%f",&p);
    if(p>90)
    {
        printf("A");
    }
    else if(p>=80 && p<90)
    {
        printf("B");
    }
    else if(p>=70 && p<80)
    {
        printf("C");
    }
    else if(p>=60 && p<70)
    {
        printf("D");
    }
    else if(p>=50 && p<60)
    {
        printf("E");
    }
    else{
        printf("fail");
    }
    return 0;

}