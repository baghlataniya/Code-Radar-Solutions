// Your code here...
#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    // Right shift num by n positions and get the LSB using bitwise AND
    int bit = (num >> n) & 1;

    printf("%d\n", bit);
    return 0;
}
