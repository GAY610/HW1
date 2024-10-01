#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf_s("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    }
    else {
        printf("%d is odd.\n", num);
    }

    return 0;
}