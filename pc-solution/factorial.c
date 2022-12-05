#include <stdio.h>
int main() {
    int num, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // shows error if the user enters a negative integer
    if (num < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= num; ++i) {
            fact *= i; //calculate of factorial
        }
        printf("Factorial of %d = %llu", num, fact);
    }

    return 0;
}