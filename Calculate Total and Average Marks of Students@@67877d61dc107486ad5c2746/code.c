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
    float total_marks = 0.0;

    // Read student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        total_marks += students[i].marks;
    }

    // Calculate average marks
    float average_marks = total_marks / n;

    // Print results
    printf("Total Marks: %.2f\n", total_marks);
    printf("Average Marks: %.2f\n", average_marks);

    return 0;
}
