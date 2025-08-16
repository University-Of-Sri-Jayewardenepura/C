// student_records.c
// EN: Keep simple records of students using a struct.
// SI: struct එකක් භාවිතයෙන් සිසුන්ගේ සරල ලේඛන තබා ගන්නවා.
// TA: struct மூலம் மாணவர்களின் சாதாரண பதிவுகளை வைத்திருக்கலாம்.

#include <stdio.h>
#include <string.h>

#define MAX 3

typedef struct {
    char name[32];
    int age;
    double gpa;
} Student;

void print_student(const Student *s) {
    printf("%s (age %d) GPA %.2f\n", s->name, s->age, s->gpa);
}

int main(void) {
    Student cls[MAX];

    for (int i = 0; i < MAX; i++) {
        printf("Student %d name: ", i+1);
        fgets(cls[i].name, sizeof cls[i].name, stdin);
        size_t len = strlen(cls[i].name);
        if (len>0 && cls[i].name[len-1]=='\n') cls[i].name[len-1]='\0';
        printf("Age: "); scanf("%d", &cls[i].age);
        printf("GPA: "); scanf("%lf", &cls[i].gpa);
        int c; while ((c=getchar())!='\n' && c!=EOF) { } // clear line
    }

    printf("\nClass list:\n");
    for (int i = 0; i < MAX; i++) print_student(&cls[i]);

    return 0;
}
