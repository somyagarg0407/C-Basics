#include <stdio.h>

int main() {
    char name1[50], name2[50];
    int salary1, salary2;
    FILE *fp;

    // Taking input from user
    printf("Enter name of employee 1: ");
    scanf("%s", name1);
    printf("Enter salary of employee 1: ");
    scanf("%d", &salary1);

    printf("Enter name of employee 2: ");
    scanf("%s", name2);
    printf("Enter salary of employee 2: ");
    scanf("%d", &salary2);

    // Opening file in write mode
    fp = fopen("employees.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Writing to file in required format
    fprintf(fp, "i. %s, %d\n", name1, salary1);
    fprintf(fp, "ii. %s, %d\n", name2, salary2);

    printf("Data written to employees.txt successfully.\n");

    // Closing the file
    fclose(fp);

    return 0;
}
