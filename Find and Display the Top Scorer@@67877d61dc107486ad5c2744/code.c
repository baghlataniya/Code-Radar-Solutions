// Your code here...
#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n); // Read the number of students

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students
    }