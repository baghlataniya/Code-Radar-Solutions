// Your code here...
#include <stdio.h>

int main() {
    int n, num = 1;
    scanf("%d", &n); // Read the number of rows

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  
            printf("%d ", num);  // Print the number
            num++;  // Increment number
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
