#include <stdio.h>
int main() {
    int num, endnum;
    scanf("%d", &endnum);
    for(num = 1; num <= endnum; num++){
        printf("%d ", num);
    }

    return 0;
}