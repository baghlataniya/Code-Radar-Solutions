// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("-1\n"); // If no set bit is found, return -1
        return 0;
    }

    int pos = 0;
    while ((num & 1) == 0) {
        num >>= 1;
        pos++;
    }

    printf("%d\n", pos);
    return 0;
}
