#include <stdio.h>
int main() {
    int num, endnum;
    scanf("%d", &endnum);
    for(num = endnum; num >= 1; num--){
        printf("%d ", num);
    }

    return 0;
}