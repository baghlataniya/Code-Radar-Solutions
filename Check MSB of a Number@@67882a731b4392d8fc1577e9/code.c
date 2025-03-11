// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Get the number of bits in an integer (assumed 32-bit)
    int msb = 1 << (sizeof(int) * 8 - 1);

    // Check if MSB is set
    if (num & msb)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
