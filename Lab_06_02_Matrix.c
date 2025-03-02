#include <stdio.h>

int main(){
    float mat_a[3][3], mat_b[3][3];
    float answer;
    int row, col;
    for (row = 0; row < 3; row++){
        scanf("%f %f %f", &mat_a[row][0], &mat_a[row][1], &mat_a[row][2]);
    }
    for (row = 0; row < 3; row++){
        scanf("%f %f %f", &mat_b[row][0], &mat_b[row][1], &mat_b[row][2]);
    }
    printf("A x B\n");
    for (row = 0; row < 3; row++){
        for (col = 0; col < 3; col++){
            answer = (mat_a[row][0] * mat_b[0][col]) +\
            (mat_a[row][1] * mat_b[1][col]) + (mat_a[row][2] * mat_b[2][col]);
            printf("%.2f ", answer);
        }
        printf("\n");
    }

    return 0;
}