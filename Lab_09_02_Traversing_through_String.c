#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;

    // Allocate memory for the string "Porsche Arnold" (including null terminator)
    // str = (char *) malloc(strLen("Porsche Arnold") + 1);
    str = (char *) malloc(14 + 1);

    // Copy "Porsche Arnold" into the allocated memory
    strcpy(str, "Porsche Arnold");

    // Print the string
    char *ptr = str;
    while (*ptr)
        printf("%c", *ptr++);

    // Free the allocated memory
    free(str);

    printf("\n");
    return 0;
}