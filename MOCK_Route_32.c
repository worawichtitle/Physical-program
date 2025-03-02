#include <stdio.h>

int main(){
    float kilometer;
    scanf("%f", &kilometer);
    if (0 <= kilometer && kilometer < 48.697){
        printf("Ayutthaya");
    } else if (48.697 <= kilometer && kilometer < 66.456) {
        printf("Ang Thong");
    } else if (66.456 <= kilometer && kilometer < 84.918) {
        printf("Sing Buri");
    } else if (84.918 <= kilometer && kilometer < 85.900) {
        printf("Lop Buri");
    } else if (85.900 <= kilometer && kilometer < 111.936) {
        printf("Sing Buri");
    } else if (111.936 <= kilometer && kilometer < 150.019) {
        printf("Chai Nat");
    } else if (150.019 <= kilometer && kilometer <= 150.545) {
        printf("Nakhon Sawan");
    } else {
        printf("InValid");
    }

    return 0;
}