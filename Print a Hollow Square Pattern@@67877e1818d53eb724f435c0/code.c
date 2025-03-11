// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the square

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= n; j++) {  // Loop for columns
            // Print '*' for the first/last row or first/last column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" "); // Print space inside the square
            }
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
