// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Perform bitwise NOT operation
    int flipped = ~num;

    printf("%d\n", flipped);
    return 0;
}
