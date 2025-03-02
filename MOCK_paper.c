#include <stdio.h>
#include <math.h>

int main(){
    char dontcare;
    int ppsize1, ppsize2;
    int ppuse = 1;
    scanf("%c%d %c%d", &dontcare, &ppsize1, &dontcare, &ppsize2);
    if (ppsize1 != ppsize2){
        int diff = ppsize2 - ppsize1;
        ppuse = pow(2, diff);
    }
    printf("%d", ppuse);

    return 0;
}