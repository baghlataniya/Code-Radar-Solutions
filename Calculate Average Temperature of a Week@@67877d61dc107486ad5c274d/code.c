// Your code here...
#include <stdio.h>

struct Day {
    char name[20];
    int temperature;
};

int main() {
    struct Day week[7]; // Array to store data for 7 days
    int totalTemp = 0;

    // Read input for 7 days
    for (int i = 0; i < 7; i++) {
        scanf("%s %d", week[i].name, &week[i].temperature);
        totalTemp += week[i].temperature;
    }

    // Calculate average temperature
    float avgTemp = totalTemp / 7.0;

    // Print the average temperature rounded to two decimal places
    printf("Average Temperature: %.2f\n", avgTemp);

    return 0;
}
