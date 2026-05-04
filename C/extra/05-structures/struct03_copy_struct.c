#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1 = {"Alice", 30};
    struct Person person2 = person1;
    printf("Person 1: %s, %d years old\n", person1.name, person1.age);
    printf("Person 2: %s, %d years old\n", person2.name, person2.age);
    return 0;
}
