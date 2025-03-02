#include <stdio.h>
#include <stdlib.h>

int main(){
    char *str;
    int size, step;
    scanf("%d %d", &size, &step);
    // printf("\nsize = %d\nstep = %d", size, step);
    str = (char *) malloc((size + 1) * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    scanf(" %[^\n]s", str);

    char *ptr = str;
    while(ptr < (str + size)){
        printf("%c", *ptr);
        ptr += step;
    }

    // printf("%s", str);
    free(str);

    return 0;
}