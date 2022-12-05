#include <stdio.h>
int main() {
   int leap_year;
   printf("Enter a year: ");
   scanf("%d", &leap_year);

   // leap year if perfectly divisible by 400
   if (leap_year % 400 == 0) {
      printf("%d is a leap year.", leap_year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (leap_year % 100 == 0) {
      printf("%d is not a leap year.", leap_year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (leap_year % 4 == 0) {
      printf("%d is a leap year.", leap_year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", leap_year);
   }

   return 0;
}