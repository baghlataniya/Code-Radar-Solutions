#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    // Clear the nth bit using bitwise AND with NOT mask
    num = num & ~(1 << n);

    printf("%d\n", num);
    return 0;
}
