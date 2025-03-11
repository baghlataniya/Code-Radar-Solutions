// Your code here...
#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    if (num == 0) {
        printf("32\n"); // If the number is 0, all 32 bits are zeros.
        return 0;
    }

    int count = 0;
    unsigned int mask = 1 << 31; // Mask for the leftmost bit (MSB)

    while ((num & mask) == 0) {
        count++;
        mask >>= 1; // Shift mask right
    }

    printf("%d\n", count);
    return 0;
}
