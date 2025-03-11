#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the triangle

    for (int i = n; i >= 1; i--) {  // Start from n and decrease
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

    
