#include <stdio.h>
int main(){
    char fname1[31];
    char sname1[31];
    char person2[51];
    char person3[51];
    scanf("%s", fname1);
    scanf(" %s", sname1);
    scanf(" %[^\n]s", person2);
    scanf(" %[^\n]s", person3);
    printf("Person 1: %s %s\nPerson 2: %s\nPerson 3: %s"\
    , fname1, sname1, person2, person3);
    return 0;
}
