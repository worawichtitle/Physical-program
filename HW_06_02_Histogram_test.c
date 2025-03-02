#include <string.h>
#include "stdio.h"
#include "ctype.h"
#include "stdbool.h"

int main() {
    int sook[26], num, list[26], list_found = 0;
    bool in_list = false;
    for (int i = 0; i < 26; i++) {
        sook[i] = 0;
    }
    scanf("%d", &num);
    char temp;

    for (int i = 0; i < num; i++) {
        scanf(" %c", &temp);
        in_list = false;
        temp = tolower(temp);
        for (int j = 0; j < list_found; j++) {
            if (temp == list[j]) {
                in_list = true;
                break;
            }
        }
        if (!in_list) {
            list[list_found] = temp;
            list_found++;
        }
        sook[temp - 97]++;
    }

    for (int i = 0; i < list_found; i++) {
        printf("%c: %d\n", list[i], sook[list[i] - 97]);
    }
}