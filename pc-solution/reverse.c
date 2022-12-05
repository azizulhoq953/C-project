#include <stdio.h>

int main(){

    int m, rev_Num = 0, remainder;

    printf("Enter the number to reverse: ");

    scanf("%d", &m);    

    while (m != 0){

        remainder = m % 10;

        rev_Num = rev_Num * 10 + remainder;

        m = m/10;

    }    

    printf("The reversed number is: %d", rev_Num);

    return 0;

}