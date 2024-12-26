#include <stdio.h>
int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    if (number < 0) {
        number = -number;
    }
    printf("Cac chu so trong so da nhap: ");
    if (number == 0) {
        printf("0");
    } else {
        int digits[10], count = 0;
        while (number > 0) {
            digits[count++] = number % 10;
            number /= 10;
        }
        for (int i = count - 1; i >= 0; i--) {
            printf("%d ", digits[i]);
        }
    }

    return 0;
}
