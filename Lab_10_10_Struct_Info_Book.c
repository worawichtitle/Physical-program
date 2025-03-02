#include <stdio.h>
#include <string.h>

struct student_info{
    char name[61];
    char surname[61];
    char sex[7];
    int age;
    char id[13];
    float gpa;
};

int main(){
    struct student_info stu;
    scanf("%s %s %s %d %s %f", stu.name, stu.surname, stu.sex,\
    &stu.age, stu.id, &stu.gpa);
    printf("%s %c %s (%d) ID: %s GPA %.2f",\
    (strcmp(stu.sex, "Male") == 0) ? "Mr" : "Miss", stu.name[0], stu.surname,\
    stu.age, stu.id, stu.gpa);

    return 0;
}