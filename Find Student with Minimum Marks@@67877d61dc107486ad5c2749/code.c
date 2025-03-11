#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n); // Read the number of students

    struct Student students[n], min_scorer;

    // Read the first student's details and assume they have the minimum marks initially
    scanf("%d %s %f", &students[0].roll_number, students[0].name, &students[0].marks);
    min_scorer = students[0];

    // Read the rest of the students and find the one with minimum marks
    for (int i = 1; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);

        if (students[i].marks < min_scorer.marks) {
            min_scorer = students[i];
        }
    }

    // Print the student with minimum marks
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n", 
           min_scorer.roll_number, min_scorer.name, min_scorer.marks);

    return 0;
}
