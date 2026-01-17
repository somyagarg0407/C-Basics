#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    int ch;   // int is important for EOF

    /* Open source file */
    fp1 = fopen("input.txt", "r");
    if (fp1 == NULL) {
        printf("Error opening input file");
        return 1;
    }

    /* Open destination file */
    fp2 = fopen("output.txt", "w");
    if (fp2 == NULL) {
        printf("Error opening output file");
        fclose(fp1);//###################################
        return 1;
    }

    /* Read first time */
    ch = fgetc(fp1);
    while (ch != EOF) {
        fputc(ch, fp2);
        ch = fgetc(fp1);
    }

    /* Move file pointer back to start */
    rewind(fp1);//#################################################################################3

    /* Read second time */
    ch = fgetc(fp1);
    while (ch != EOF) {
        fputc(ch, fp2);
        ch = fgetc(fp1);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File content written twice successfully.");

    return 0;
}
