#include <stdio.h>
#include <stdlib.h>

int main() {
    char *arr = '\0';        // Pointer to the dynamic array
    int size = 0;           // Current number of elements in the array
    char text;                // Variable to store user input

    // Allocate initial memory for the array
    arr = (char *) malloc(sizeof(char));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    // Input loop: Read integers until the user enters -1
    while (1) {
        scanf(" %c", &text);     // Read an integer from the user
        if (text == '-'){       // Stop if the user enters -1
            // printf("enter break\n");
            break;
        }
        size++;

        // printf("input: %c\n", text);

        // Resize the array if it's full
        char *temp = (char *) realloc(arr, (size + 1) * sizeof(char));                    // Reallocate memory for the array with the new capacity
        if (temp == NULL) {
            printf("Memory reallocation failed!\n");
            free(arr);
            return 1;
        }
        arr = temp;                                             // Update 'arr' to point to the newly allocated memory

        // Add the new element to the array using pointer arithmetic
        *(arr + size - 1) = text;
        *(arr + size) = '\0';
        
    }
    // printf("end");
    // Print the original array
    printf("%s\n", arr);

    for (int i = size - 1; i >= 0; i--) {
        printf("%c", *(arr + i));
    }

    free(arr);
    return 0;
}
