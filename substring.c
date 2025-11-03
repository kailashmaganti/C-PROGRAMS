#include<stdio.h>
int main()
{
    char st[30];
    char sub[30];
    int flag=0;
    printf("enter string 1 \n");
    scanf("%[^\n]",st);
    printf("enter a sub string\n");
    scanf("%[^\n]",sub);
    int i,j;
    for(i=0;st[i]!='\0';i++)
    {
        for(j=0;sub[j]!='\0';j++)
        {
            if(st[i+j]!=sub[j])
            {
                break;
            }
            
        }
    }
    if(sub[j]=='\0')
    {
        flag=1;
        printf("the substring found at %d \n",i);
    }
    if(flag==0)
    {
        printf("substring not found");
    }
    return 0;
}