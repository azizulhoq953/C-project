#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int a, int b) {
    // Implement this method
}

/**
 * Takes care of the problem input and output.
 */
int main() {
    int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        int a, b;
        scanf("%d %d", &a, &b);
        int sum =a+b;

        printf("Case %d: %d\n", caseno,sum);
    }
    return 0;
}
