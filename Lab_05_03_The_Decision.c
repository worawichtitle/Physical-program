#include <stdio.h>
int main() {
    int startnum, endnum;
    scanf("%d %d", &startnum, &endnum);
    if (startnum >= endnum){
        while(startnum >= endnum){
            printf("%d ", startnum--);
        }
    } else {
        while(startnum <= endnum){
            printf("%d ", startnum++);
        }
    }

    return 0;
}