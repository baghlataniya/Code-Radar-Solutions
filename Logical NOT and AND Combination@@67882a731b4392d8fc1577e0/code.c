#include <stdio.h>  // Include standard I/O library

int main() {
    int a, b;

    // Take input
    scanf("%d %d", &a, &b);

    // Condition using Logical NOT (!) and Logical AND (&&)
    if (!(a > 0) && !(b > 0)) {  
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
