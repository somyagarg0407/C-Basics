#include <stdio.h>

int main() {
    
    char str[20];
    int i=0;

    printf("enter the input string ");
    gets(str);

    for(i=0;str[i]!='\0';i++){
        str[i]=str[i]+1;
    }

    printf("Required encrypted string is %s",str);

    return 0;
}