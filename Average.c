//write a programme user input sum and avearage

#include<stdio.h>
int main()
{
   int num[10],sum=0,i;
   printf("Enter 10 Number=");
   for(i=0;i<10;i++)
   {
       scanf("%d",&num[i]);
   }
    for(i=0;i<10;i++)
    {
        sum=sum+num[i];



    }
    printf("The sum of number=%d\n",sum);
            printf("Number of Average=%.2f",(float)sum/10);

    getch();
}
