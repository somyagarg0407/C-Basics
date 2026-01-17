#include <stdio.h>

int main() {
    char str[4];

    scanf("%s",str); //hence we have mot used & in scanf as str is alpeady the address
    printf("%s",str);
    return 0;
}