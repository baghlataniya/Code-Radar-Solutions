#include <stdio.h>

void factorialRange(int start, int end) {
    if (start > end || start < 0) {
        printf("Invalid range\n");
        return;
    }

    for (int i = start; i <= end; i++) {
        int fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        printf("%d\n", fact);
    }
}