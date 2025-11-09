#include <stdio.h>
#include<string.h>
#include <math.h>
void factorial();
void sumdigits();
void reverse();
void palindrome();
void prime();
void fibonacci();
void multiplicationtable();
void armstrong();

int main()
 {
    int x;
    printf("Enter 1 for factorial\n");
    printf("Enter 2 for sum of digits\n");
    printf("Enter 3 for reverse of a number\n");
    printf("Enter 4 for palindrome\n");
    printf("Enter 5 for prime number or not\n");
    printf("Enter 6 for fibonacci series\n");
    printf("Enter 7 for multiplication table\n");
    printf("Enter 8 for armstrong number or not\n");
    scanf("%d", &x);

    switch (x) 
    {
        case 1: factorial(); break;
        case 2: sumdigits(); break;
        case 3: reverse(); break;
        case 4: palindrome(); break;
        case 5: prime(); break;
        case 6: fibonacci(); break;
        case 7: multiplicationtable(); break;
        case 8: armstrong(); break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}

void factorial() {
    int n, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        fact = fact*i;
    }
    printf("The factorial is %d\n", fact);
}

void sumdigits() {
    int n, r, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
     {
        r = n % 10;
        sum =sum+ r;
        n = n/10;
    }
    printf("The sum of digits is %d\n", sum);
}

void reverse() {
    int n, r, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n !=0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    printf("The reverse is %d\n", rev);
}

void palindrome() {
    int n, r, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    if (temp == rev)
        printf("It is a palindrome\n");
    else
        printf("It is not a palindrome\n");
}

void prime() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Not a prime number\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        printf("It is a prime number\n");
    else
        printf("It is not a prime number\n");
}

void multiplicationtable() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d × %d = %d\n", n, i, n * i);
    }
}

void armstrong() {
    int n, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        sum = sum+ pow(r,3);
        n /= 10;
    }
    if (sum == temp)
        printf("It is an Armstrong number\n");
    else
        printf("It is not an Armstrong number\n");
}

void fibonacci() {
    int n, f = 0, s = 1, t;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("%d %d ", f, s);
    for (int i = 3; i <= n; i++) {
        t = f + s;
        printf("%d ", t);
        f = s;
        s = t;
    }
    printf("\n");
}
