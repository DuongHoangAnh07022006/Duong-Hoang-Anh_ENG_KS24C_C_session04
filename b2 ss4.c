#include <stdio.h>

int main() {
    int num;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d l� so chan.\n", num);
    } else {
        printf("%d l� so le.\n", num);
    }

    return 0;
}

