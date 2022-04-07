
// Modified program using pointers
#include <stdio.h>
#include <iostream>


// add is the short name for address
void compare(int a, int b, int* add_great, int* add_small)
{
    if (a > b) {

        // a is stored in the address pointed
        // by the pointer variable *add_great
        *add_great = a;
        *add_small = b;
    }
    else {
        *add_great = b;
        *add_small = a;
    }
}

void addition(int a,int b){
    int add=a+b;
std::cout<<"Sum OF"<<add;
}

// Driver code
int main()
{
    int great, small, x, y;

    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);

  addition(10,20);

    compare(x, y, &great, &small);
    printf("\nThe greater number is %d and the"
           "smaller number is %d",
           great, small);


    return 0;
}
