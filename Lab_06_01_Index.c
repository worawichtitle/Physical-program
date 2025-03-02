#include <stdio.h>
int main(){
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int num, i;
    do {
        scanf("%d", &num);
        // printf("input %d\n", num);
    } while(num > 20 || num < 1);

    for(i = 0; i < sizeof(M) / sizeof(M[0]); i++){
        if (M[i] == num){
            printf("%d is in M at index [%d]", num, i);
            return 0;
        }
    }

    for(i = 0; i < sizeof(N) / sizeof(N[0]); i++){
        if (N[i] == num){
            printf("%d is in N at index [%d]", num, i);
            return 0;
        }
    }
    printf("%d is not in neither M nor N", num);

    return 0;
}