#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, main;
    printf("Enter an integer: ");
    scanf("%d", &n);
    main = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (main == reversed)
        printf("%d is a palindrome.", main);
    else
        printf("%d is not a palindrome.", main);

    return 0;
}