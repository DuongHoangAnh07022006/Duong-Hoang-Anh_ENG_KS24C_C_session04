#include <stdio.h>
#include <stdbool.h>
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
bool isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12) {
        return false;
    }
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (day < 1 || day > 31) {
                return false;
            }
            break;
        case 4: case 6: case 9: case 11:
            if (day < 1 || day > 30) {
                return false;
            }
            break;
        case 2:
            if (isLeapYear(year)) {
                if (day < 1 || day > 29) {
                    return false;
                }
            } else {
                if (day < 1 || day > 28) {
                    return false;
                }
            }
            break;
        default:
            return false;
    }
    
    return true;
}

int main() {
    int day, month, year;
    printf("Nhap v�o ng�y: ");
    scanf("%d", &day);
    printf("Nhap v�o th�ng: ");
    scanf("%d", &month);
    printf("Nhap v�o nam: ");
    scanf("%d", &year);
    if (isValidDate(day, month, year)) {
        printf("Ng�y %d/%d/%d l� hop le.\n", day, month, year);
    } else {
        printf("Ng�y %d/%d/%d kh�ng hop le.\n", day, month, year);
    }
    
    return 0;
}

