#include <stdio.h>

int main(void) {

  int n;
  printf("Enter the number of columns");
  scanf("%d",&n);
  //printing the upper part of the pattern..
 for(int i=n;i<=1;i++)
 {
   for(int j=n;j<=1-i;j++)
   {
       printf(" ");
   }
   for(int k=n;k<=0-i;k++)
   {
     printf("*");
   }
   printf("\n");
 }
for(int i=1;i<n;i++)
{
  for(int j=1;j<i+1;j++)
  {
    printf(" ");
  }
  for(int k=1;k<=i+1;k++)
  {
    printf("*");
  }
  printf("\n");
}
  return 0;
}
