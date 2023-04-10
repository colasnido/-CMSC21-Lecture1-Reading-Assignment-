#include <stdio.h>

int main() {
    int num, square=1;

    printf("Enter the number of integers to square: ");
    scanf("%d", &num);
    printf("TABLE OF POWERS OF 2");
    for (int i = 0; i <= num; i++) {
        printf("\n %d \t %d\n", i, square);
        square = square * 2;
    }

    return 0;
}
