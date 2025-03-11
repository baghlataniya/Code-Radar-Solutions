// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of rows

    for (int i = 1; i <= n; i++) {  // Loop for rows
        int num = (i % 2 == 1) ? 1 : 0; // Odd rows -> 1, Even rows -> 0
        for (int j = 1; j <= i; j++) {  
            printf("%d ", num);  // Print the number
        }
    // Move to the next line
    }

    return 0;
}
