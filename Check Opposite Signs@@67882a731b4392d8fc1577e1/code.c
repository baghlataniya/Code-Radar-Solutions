// Your code here...
#include <stdio.h>

int main() {
    int a, b;
    
    // Take input
    scanf("%d %d", &a, &b);
    
    // Check if numbers have opposite signs
    if (a * b < 0) {
        printf("True\n");  // Opposite signs
    } else {
        printf("False\n"); // Same sign or one is zero
    }
    
    return 0;
}
