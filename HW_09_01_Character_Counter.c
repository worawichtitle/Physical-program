#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char *str;
    int size = 100, c_up = 0, c_down = 0, c_num = 0;
    str = (char *) malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    scanf("%[^\n]s", str);

    char *ptr = str;
    while(*ptr != '\0'){
        if(isupper(*ptr)){
            c_up++;
        } else if (islower(*ptr)){
            c_down++;
        } else if (isdigit(*ptr)){
            c_num++;
        }
        ptr++;
    }
    printf("Lowercase letters: %d\n", c_down);
    printf("Uppercase letters: %d\n", c_up);
    printf("Digits: %d", c_num);

    // printf("%s", str);
    free(str);

    return 0;
}