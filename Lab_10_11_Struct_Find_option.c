#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct student_info{
    char name[61];
    char surname[61];
    char sex[7];
    int age;
    char id[13];
    float gpa;
};

int comparename(const void* a, const void* b);
int comparesurname(const void* a, const void* b);
int compareid(const void* a, const void* b);

int main(){
    int i;
    struct student_info stu[20];
    char sort[8];
    for (i = 0; i < 20; i++){
        scanf("%s %s %s %d %s %f ", stu[i].name, stu[i].surname, stu[i].sex,\
        &stu[i].age, stu[i].id, &stu[i].gpa);
    }
    scanf("%s", sort);
    for (int i = 0; i < strlen(sort); i++){
        sort[i] = tolower(sort[i]);
    }
    if (strcmp(sort, "name") == 0){
        qsort(stu, 20, sizeof(struct student_info), comparename);
    } else if (strcmp(sort, "surname") == 0){
        qsort(stu, 20, sizeof(struct student_info), comparesurname);
    } else {
        qsort(stu, 20, sizeof(struct student_info), compareid);
    }
    for (i = 0; i < 20; i++){
        printf("%s %c %s (%d) ID: %s GPA %.2f\n",\
        (strcmp(stu[i].sex, "Male") == 0) ? "Mr" : "Miss", stu[i].name[0],\
        stu[i].surname, stu[i].age, stu[i].id, stu[i].gpa);
    }


    return 0;
}

int comparename(const void* a, const void* b){
    return strcmp(((struct student_info *)a)->name, ((struct student_info *)b)->name);
}
 
int comparesurname(const void* a, const void* b){
    return strcmp(((struct student_info *)a)->surname, ((struct student_info *)b)->surname);
}
 
int compareid(const void* a, const void* b){
    return atoi(((struct student_info *)a)->id) - atoi(((struct student_info *)b)->id);
}