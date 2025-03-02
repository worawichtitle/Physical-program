#include <stdio.h>
#include <stdlib.h>

int main(){
    char *str = '\0';
    int size = 100;
    str = (char *) malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    scanf("%[^\n]s", str);

    char *ptr = str;
    while(*ptr != '\0'){
        ptr++;
    }
    while(ptr < str){
        printf("%c", *(--ptr));
    }
    // printf("%s", str);
    free(str);

    return 0;
}