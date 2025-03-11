// Your code here...
#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num == 0) {
        printf("32\n"); // If the number is 0, all bits are zeros.
        return 0;
    }

    int count = 0;
    while ((num & 1) == 0) { // Check the least significant bit (LSB)
        count++;
        num >>= 1; // Right shift the number
    }

    printf("%d\n", count);
    return 0;
}

