#include <stdio.h>

int main(){
    char fname[31];
    char sname[31];
    char stu_id[9];
    int day;
    int month;
    int year;
    float gpa;
    scanf("%s", fname);
    scanf(" %s", sname);
    scanf(" %s", stu_id);
    scanf(" %d/%d/%d", &day, &month, &year);
    scanf(" %f", &gpa);

    printf("Fullname: %s %s\nID: %s\n", fname, sname, stu_id);
    printf("DOB: %02d-%02d-%04d\nGPA: %.02f", day, month, year, gpa);
    return 0;
}
