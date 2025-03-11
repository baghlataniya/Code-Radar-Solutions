// Your code here...
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int n, search_roll;
    scanf("%d", &n); // Read the number of students

    struct Student students[n];

    // Read student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
    }

    // Read the roll number to search
    scanf("%d", &search_roll);

    // Search for the student
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].roll_number == search_roll) {
            printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
                   students[i].roll_number, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    // If not found, print message
    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}
