#include <stdio.h>

int main() {
    int year;
    printf("Nhap vao so nam: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d l� nam nhuan.\n", year);
    } else {
        printf("%d kh�ng phai l� nam nhuan.\n", year);
    }

    return 0;
}

