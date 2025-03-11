// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the triangle

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (char ch = 'A'; ch < 'A' + i; ch++) {  
            printf("%c", ch);  // Print characters from 'A' to ('A' + i - 1)
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
