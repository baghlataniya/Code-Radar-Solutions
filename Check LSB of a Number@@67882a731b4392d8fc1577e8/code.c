// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Check if LSB is 1
    if (num & 1)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
