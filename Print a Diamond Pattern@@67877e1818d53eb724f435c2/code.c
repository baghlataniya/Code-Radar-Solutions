// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the diamond (half height)

    // Upper half (pyramid)
    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= n - i; j++) {  
            printf(" ");  // Print spaces
        }
        for (int k = 1; k <= (2 * i - 1); k++) {  
            printf("*");  // Print stars
        }
        printf("\n");
    }

    // Lower half (inverted pyramid)
    for (int i = n - 1; i >= 1; i--) {  
        for (int j = 1; j <= n - i; j++) {  
            printf(" ");  // Print spaces
        }
        for (int k = 1; k <= (2 * i - 1); k++) {  
            printf("*");  // Print stars
        }
        printf("\n");
    }

    return 0;
}
