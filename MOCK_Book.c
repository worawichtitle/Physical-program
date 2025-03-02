#include <stdio.h>

int main(){
    int bookid, lastdgt;
    scanf("%d", &bookid);
    if (bookid < 1000){
        lastdgt = bookid % 10;
        switch (lastdgt){
            case 0:
            case 5:
                printf("Science");
                break;
            case 3:
            case 7:
                printf("Literature");
                break;
            default:
                printf("General Collection");
                break;
        }
    } else {
        int last2dgt = bookid % 100;
        if (last2dgt % 4 == 0){
            printf("Reference");
        } else if (last2dgt == 11 || last2dgt == 22 || last2dgt == 33){
            printf("History");
        } else {
            printf("Unclassified");
        }
    }

    return 0;
}