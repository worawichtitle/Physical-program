#include <stdio.h>
#include <string.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

struct Record getRecord(){
struct Record rec;
scanf("%s %s %ld %ld", rec.id, rec.name, &rec.salary, &rec.sales);
return rec;
}

int main() {
    int people, i;
    scanf("%d\n", &people);
    struct Record rec[people];
    char find_id[10];
    int found = 0;
    for (i = 0; i < people; i++){
        rec[i] = getRecord();
    }
    scanf("%s", find_id);
    i = 0;
    while(!found && i < people){
        if (strcmp(rec[i].id, find_id) == 0){
            found = 1;
            printf("%s\n", rec[i].id);
            printf("%s\n", rec[i].name);
            printf("%ld\n", rec[i].sales);
            double commission = rec[i].sales * 0.02;
            printf("%.2lf\n", commission);
            printf("%ld\n", rec[i].salary);
            printf("%.2lf\n", rec[i].salary + commission);
        }
        i++;
    }
    if(!found){
        printf("ID not found !!!");
    }

    return 0;
}
