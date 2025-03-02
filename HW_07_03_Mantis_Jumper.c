#include <stdio.h>

int jump(int step);

int main(){
    int step, allways;
    scanf("%d", &step);
    allways = jump(step);
    printf("method = %d", allways);

    return 0;
}

int jump(int step){
    int way;
    if (step > 1){
        way = jump(step - 1) + jump(step - 2);
    } else {
        //if (step <= 1) set: way = 1
        way = 1;
    }

    return way;
}