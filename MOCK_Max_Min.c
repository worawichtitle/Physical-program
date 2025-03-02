#include <stdio.h>
#include <string.h>

int findax(int val1, int val2);
int findin(int val1, int val2);

int main(){
    char max_min[4];
    int val1, val2, val3, val4, val5;
    int theax, thein;
    scanf("%s", max_min);
    scanf(" %d %d %d %d %d", &val1, &val2, &val3, &val4, &val5);
    if (strcmp(max_min, "MAX") == 0){
        theax = findax(val1, findax(val2, findax(val3, findax(val4, val5))));
        printf("MAX : %d", theax);
    } else {
        thein = findin(val1, findin(val2, findin(val3, findin(val4, val5))));
        printf("MIN : %d", thein);
    }

    return 0;
}

int findax(int val1, int val2){
    return (val1 > val2 ? val1 : val2);
}
int findin(int val1, int val2){
    return (val1 < val2 ? val1 : val2);
}