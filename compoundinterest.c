#include <stdio.h>
#include <math.h>  
int main() {
    float principal, rate, time, compoundInterest, amount;
    int n; 


    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    printf("Enter number of times interest applied per year: ");
    scanf("%d", &n);

    amount = principal * pow((1 + (rate / (n * 100))), n * time);
    compoundInterest = amount - principal;

    
    printf("\nTotal Amount after %f years = %f\n", time, amount);
    printf("Compound Interest = %f\n", compoundInterest);

    return 0;
}
