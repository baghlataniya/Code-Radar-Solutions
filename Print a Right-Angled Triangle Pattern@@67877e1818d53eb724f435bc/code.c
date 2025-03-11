// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the triangle

    for (int i = 1; i <= n; i++) {  // Start from 1 and increase
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
