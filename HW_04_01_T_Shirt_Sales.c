#include <stdio.h>

int main() {
    float price, percent, f_promo, twoforone;
    int amount;
    scanf("%f %f %d", &price, &percent, &amount);
    f_promo = amount * price * ((100 - percent) / 100);
    twoforone = ((amount / 3 * 2) + (amount % 3)) * price;
    if (f_promo <= twoforone){
        printf("Discount %.0f%%\n%.2f", percent, f_promo);
    } else {
        printf("Buy 2 Get 1\n%.2f", twoforone);
    }

    return 0;
}