#include <stdio.h>
int main(){
    int level, step = 1, num;
    scanf("%d", &level);
    while(step <= level){
        num = 1;
        while(num <= level){
            if (num != step && num != level - step + 1){
                printf("#");
            } else {
                printf("-");
            }
            num++;
        }
        step++;
        printf("\n");
    }

    return 0;
}