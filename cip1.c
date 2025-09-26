#include <stdio.h>

int main() {
    int num;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Print multiplication table using a for loop
    printf("Multiplication Table of %d:\n", num);
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

