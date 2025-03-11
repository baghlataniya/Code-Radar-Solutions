// Your code here...
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
    float bonus;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Employee emp[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);

        // Calculate bonus: 10% if salary > 50000, else 5%
        if (emp[i].salary > 50000)
            emp[i].bonus = 0.10 * emp[i].salary;
        else
            emp[i].bonus = 0.05 * emp[i].salary;
    }

    // Output employee details with bonus
    for (int i = 0; i < n; i++) {
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", emp[i].id, emp[i].name, emp[i].bonus);
    }

    return 0;
}
