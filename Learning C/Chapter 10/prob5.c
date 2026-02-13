#include <stdio.h>

int main() {
    FILE *fp;
    int num;

    // Open file in read mode
    fp = fopen("number.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the integer from the file
    fscanf(fp, "%d", &num);
    fclose(fp); // Close after reading

    // Double the value
    num = num * 2;

    // Open file in write mode to modify it
    fp = fopen("number.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the doubled value back to the file
    fprintf(fp, "%d", num);
    fclose(fp); // Close after writing

    printf("Value doubled successfully!\n");

    return 0;
}
