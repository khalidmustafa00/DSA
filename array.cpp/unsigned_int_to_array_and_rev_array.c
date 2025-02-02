#include <stdio.h>

int main() {
    unsigned int number;
    int digits[8];
    int reversed[8];
    int i;

    printf("Enter an 8-digit unsigned integer number: ");
    scanf("%u", &number);

    // Storing individual digits in the array
    for (i = 0; i < 8; i++) {
        digits[i] = number % 10;
        number /= 10;
    }

    // Copying the content of the array into a second array in reverse order
    for (i = 0; i < 8; i++) {
        reversed[i] = digits[7 - i];
    }

    printf("Original Array: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", digits[i]);
    }

    printf("\nReversed Array: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", reversed[i]);
    }

    printf("\n");

    return 0;
}
