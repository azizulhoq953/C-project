#include<stdio.h>

int operation(int num1,int num2);

int main(){

int a,b;
printf("Enter First Numbers:");
scanf("%d",&a);
printf("Enter Second Number:");
scanf("%d",&b);
int result;
result=operation(a,b);

printf("Your Function Value:%d",result);

return 0;
}

int operation(int num1,int num2){
int value= num1+num2;
int divided;
divided=num1*num2;

return value,divided;

}





