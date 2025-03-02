#include <stdio.h>

int main(){
    char cell[4];
    scanf("%s", cell);
    printf("*****\n*-*-*\n");
    printf("*%s*\n", cell);
    printf("*-*-*\n*****");

    return 0;
}
