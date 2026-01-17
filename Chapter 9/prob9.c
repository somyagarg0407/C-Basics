#include <stdio.h>

/* Structure to store date */
struct Date {
    int day;
    int month;
    int year;
};

/* Function to compare two dates */
int compareDate(struct Date d1, struct Date d2) {

    /* Compare year first */
    if (d1.year > d2.year)
        return 1;
    if (d1.year < d2.year)
        return -1;

    /* If years are same, compare month */
    if (d1.month > d2.month)
        return 1;
    if (d1.month < d2.month)
        return -1;

    /* If months are same, compare day */
    if (d1.day > d2.day)
        return 1;
    if (d1.day < d2.day)
        return -1;

    /* Dates are equal */
    return 0;
}

int main() {
    struct Date d1 = {24, 5, 2024};
    struct Date d2 = {25, 6, 2023};

    int result = compareDate(d1, d2);

    if (result == 1)
        printf("First date is later than second date");
    else if (result == -1)
        printf("First date is earlier than second date");
    else
        printf("Both dates are equal");

    return 0;
}
