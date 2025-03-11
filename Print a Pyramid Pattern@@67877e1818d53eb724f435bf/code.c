// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of rows

    for (int i = 1; i <= n; i++) {  // Loop for each row
        for (int j = 1; j <= n - i; j++) {  
            printf(" ");  // Print spaces for alignment
        }
        for (int k = 1; k <= (2 * i - 1); k++) {  
            printf("*");  // Print stars
        }
        printf("\n");  // Move to next line
    }

    return 0;
}
