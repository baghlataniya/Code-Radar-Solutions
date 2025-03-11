// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the triangle

    for (int i = n; i >= 1; i--) {  // Loop for rows (decreasing)
        for (int j = 1; j <= i; j++) {  
            printf("%d ", j);  // Print numbers from 1 to i
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
