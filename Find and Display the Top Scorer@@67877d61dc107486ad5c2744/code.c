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

    // Read student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    // Find the student with the highest marks
    int top_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[top_index].marks) {
            top_index = i;
        }
    }

    // Print the top scorer
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",
           students[top_index].roll_number, students[top_index].name, students[top_index].marks);

    return 0;
}
