#include <stdio.h>
#include <string.h>

enum Rank { JUNIOR = 1, MID = 2, SENIOR = 3 };

struct Person {
    char name[32];
    int age;
    enum Rank rank;
};

void print_person(const struct Person* p) {
    const char* rank_name = (p->rank == JUNIOR) ? "JUNIOR" : (p->rank == MID) ? "MID" : "SENIOR";
    printf("Person{name='%s', age=%d, rank=%s}\n", p->name, p->age, rank_name);
}

int main(void) {
    struct Person alice = {"Alice", 30, MID};
    print_person(&alice);

    union Number { int i; float f; } u;
    u.i = 42;
    printf("union as int: %d\n", u.i);
    u.f = 3.14f;
    printf("union as float: %.2f (overwrites int)\n", u.f);

    return 0;
}
