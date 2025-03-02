#include <stdio.h>
int main(){
    float mat[3][3], num;
    int row, col;
    for(row = 0; row < 3; row++){
        scanf("%f %f %f", &mat[row][0], &mat[row][1], &mat[row][2]);
    }
    num = mat[0][0];
    float check[3][3] = {{num, 0, 0}, {0, num, 0}, {0, 0, num}};
    for(row = 0; row < 3; row++){
        for(col = 0; col < 3; col++){
            if (mat[row][col] != check[row][col]){
                printf("This is not a scalar matrix");
                return 0;
            }
        }
    }
    printf("This is a scalar matrix");
    // printf("%f %f %f\n%f %f %f\n%f %f %f", mat[0][0], mat[0][1], mat[0][2], \
    // mat[1][0], mat[1][1], mat[1][2], mat[2][0], mat[2][1], mat[2][2]);

    return 0;
}