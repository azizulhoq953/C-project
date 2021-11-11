#include <stdio.h>
main(void) {
   auto int my_fun();
   my_fun();
   printf("\n");
   int a,b;
   printf("Enter Your First Number Of Addition:");
   scanf("%d",&a);
   printf("Enter Your Second Number Of Addition:");
   scanf("%d",&b);
   int sum=a+b;
   printf("Main Function sum Is %d\n",sum);

   int my_fun() {


       float a,b;

       printf("Enter First Number:");
       scanf("%f",&a);
       printf("Enter Second Number:");
       scanf("%f",&b);

       float subtraction=a-b;
      printf("my_fun function subtraction is %.2f\n",subtraction);
   }
   printf("Done");
}
