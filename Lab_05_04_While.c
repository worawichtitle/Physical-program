#include <stdio.h>

int main(){
    int num = 1, endnum;
    scanf("%d", &endnum);
    while (num <= endnum){
        printf("%d ", num++);
    }

    return 0;
}