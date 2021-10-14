#include<stdio.h>

int main(){

char n[20];
char m[10];

printf("Enter Your First name:");
gets(n);

printf("Enter Your Last Name:");

gets(m); //using gets because scanf() function space for not detacted

printf("%s",n);
printf("%s",m);

getch();
}
