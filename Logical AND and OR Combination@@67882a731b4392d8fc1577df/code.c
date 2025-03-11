// Your code here...
#include <stdio.h>

int main() {
    int a, b;
    
    // Take input
    scanf("%d %d", &a, &b);

    // Check conditions using AND (&&) and OR (||)
    if ((a > 0 && b < 0) || (a == 0 && b == 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
