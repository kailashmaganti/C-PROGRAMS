#include <stdio.h>

int main() {
    int n = 4; // number of rows
    
    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
