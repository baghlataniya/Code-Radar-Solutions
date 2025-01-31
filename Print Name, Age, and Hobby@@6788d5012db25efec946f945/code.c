#include <stdio.h>



int main() {
    char name[100];
    char hobby[100];
    int age;
    scanf("%s %s %d",&name,&hobby,&age);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}