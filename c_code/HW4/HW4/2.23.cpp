#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf_s("%d %d %d", &a, &b, &c);

    // ��̤j��
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // ��̤p��
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}