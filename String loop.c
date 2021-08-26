
//loop use For Character Length

#include<stdio.h>
int main()
{
char S1[]="Azizul Hoq";
int i=0,len=0;

while(S1[i]!='\0')
{
   i++;
   len++;
}

    printf("Character Length= %d",len);

getch();

}
