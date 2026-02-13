#include <stdio.h>

int main() {

    char str[50];
    char x;
    int i = 0, count = 0;

    printf("Enter the input string: ");
    fgets(str, sizeof(str), stdin);////try to not use gets only in c now

    printf("Enter the character to search: ");
    scanf(" %c", &x);//################------leave blank before %c-----############

    while (str[i] != '\0') {
        if (str[i] == x) {
            count++;
        }
        i++;
    }

    if (count > 0) {
        printf("Character is found in the string");
    } else {
        printf("Character is not found in the string");
    }

    return 0;
}
