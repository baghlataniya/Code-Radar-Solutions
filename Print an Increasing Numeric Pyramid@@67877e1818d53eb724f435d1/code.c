// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of rows

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= n - i; j++) {  
            printf(" ");  // Print spaces for alignment
        }
        for (int k = 1; k <= i; k++) {  
            printf("%d ", k);  // Print increasing numbers
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
