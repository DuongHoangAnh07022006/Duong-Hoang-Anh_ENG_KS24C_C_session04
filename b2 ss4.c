#include <stdio.h>

int main() {
    int num;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d là so chan.\n", num);
    } else {
        printf("%d là so le.\n", num);
    }

    return 0;
}

