#include <stdio.h>

int main () {
   int x;
   int *ptr;
   ptr = &x;
   char y;
   char *ch;
   ch =&y;
   printf("Enter Any Numbers:");
   scanf("%d",&x);

   printf("Enter Any Charecter:");
   scanf("%s",&y);

   printf("Value Of Number = %d\n",x);
   printf("Value Of Address Number = %u\n",&x);
    printf("Pointer value of Address=%d\n",ptr);
   printf("Value Of pointer=%d",*ptr);

   printf("Value Of y %c:\n",y);
   printf("Value Of Address = %x\n",&y);
   printf("pointer Value Of Address=%x\n",ch);
   printf("Pointer Value=%c",*ch);
  return 0;
}
