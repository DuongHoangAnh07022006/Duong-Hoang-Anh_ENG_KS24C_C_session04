#include <stdio.h>

int main() {
    int year;
    printf("Nhap vao so nam: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d là nam nhuan.\n", year);
    } else {
        printf("%d không phai là nam nhuan.\n", year);
    }

    return 0;
}

