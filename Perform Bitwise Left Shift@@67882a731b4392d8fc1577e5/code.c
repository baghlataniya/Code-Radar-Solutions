// Your code here...
#include <stdio.h>

int main() {
    int a, shift;
    
    // Take input
    scanf("%d %d", &a, &shift);
    
    // Perform bitwise left shift operation and print the result
    printf("%d\n", a << shift);
    
    return 0;
}
