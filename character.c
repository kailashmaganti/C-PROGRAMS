#include <stdio.h>

int main(void)
{
    char x;

    printf("Enter an alphabet: ");
    scanf(" %c", &x);

    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ||
        x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    {
        printf("%c is a vowel\n", x);
    }
    else
    {
        printf("It is a consonant\n");
    }

    return 0;
}
