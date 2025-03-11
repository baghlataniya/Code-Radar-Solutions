#include <stdio.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n); 

    struct Student students[n], top_scorer;
    scanf("%d %s %f", &students[0].roll_number, students[0].name, &students[0].marks);
    top_scorer = students[0];
    for (int i = 1; i < n; i++) {
        scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
        
        if (students[i].marks > top_scorer.marks) {
            top_scorer = students[i];
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n", 
           top_scorer.roll_number, top_scorer.name, top_scorer.marks);

    return 0;
}

