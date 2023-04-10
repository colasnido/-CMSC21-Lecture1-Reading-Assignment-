#include <stdio.h>

int main() {
    int days_in_month, starting_day, day, i;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);

    if (days_in_month < 1 || days_in_month > 31) {
        printf("Invalid number of days in month.\n")
        return 1;
    }

    printf("Enter starting day of the week (1=Monday, 7=Sunday): ");
    scanf("%d", &starting_day);

    if (starting_day < 1 || starting_day > 7) {
        printf("Invalid starting day of the week.\n");
        return 1;
    }

    printf("Mon\tTue\tWed\tThu\tFri\tSat\tSun\n");

    for (i = 1; i < starting_day; i++) {
        printf("\t");
    }

    for (day = 1; day <= days_in_month; day++) {
        printf("%d\t", day);
        if ((day + starting_day - 1) % 7 == 0) {
            printf("\n");
        }
    }

    return 0;
}
