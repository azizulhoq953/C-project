#include<stdio.h>
int operation(int *a, int *b, int *c, int *d){

*a=10;
*b=20;
*c=33;
*d=55;

}
int main(){

int a,b,c,d;
//int sum=a*b*c*d;
//operation(&sum);
operation(&a,&b,&c,&d);
//printf("%d",sum);
printf("%d %d %d",a,b,c,d);

}




