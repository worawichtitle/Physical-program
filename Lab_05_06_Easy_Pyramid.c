#include <stdio.h>

int main(){
    int level, step = 1, num;
    scanf("%d", &level);
    do {
        num = 0;
        while(num < level - step){
            printf(" ", num++);
        }
        num = 0;
        while(num < step * 2 -1){
            printf("*", num++);
        }
        printf("\n");
        step++;
    } while(step <= level);

    return 0;
}