#include <stdio.h>

int main()
 {
    int characters = 0, words = 0, lines = 0, vowels = 0, consonants = 0;
    char st[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", st);

    for (int i = 0; st[i] != '\0'; i++) 
    {
        
        characters++;

        if (st[i]== '\n')
            lines++;

        if (st[i] == ' ' || st[i] == '\n' || st[i] == '\t')
            words++;

        if (st[i] == 'a' || st[i]== 'e' || st[i]== 'i' || st[i] == 'o' || st[i] == 'u')
            vowels++;
        if ((st[i] >= 'a' && st[i] <= 'z'))
            consonants++;
    }

    words++; 

    printf("Words: %d\n", words);
    printf("Consonants: %d\n", consonants);
    printf("Lines: %d\n", lines + 1);
    printf("Vowels: %d\n", vowels);
    printf("Characters: %d\n", characters);

    return 0;
}
