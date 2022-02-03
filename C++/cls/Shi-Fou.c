#include<stdio.h>
#include<stdbool.h>
int main(){

int x;
printf("Enter Your Number:");
scanf("%d",&x);

if(x%2==0){
    printf("Number Is Even");
}else
printf("Number Is Odd");

return 0;
}
