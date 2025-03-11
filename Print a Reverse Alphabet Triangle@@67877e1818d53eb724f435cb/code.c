// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the size of the triangle

    for (int i = n; i >= 1; i--) {  // Loop for rows (decreasing order)
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) {  
            printf("%c ", ch);  // Print characters in reverse order
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
