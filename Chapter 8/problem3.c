#include <stdio.h>

int main() {

    char str[]="somya";
    int i=0;
    char c=str[i];
    while(c!='\0'){

        c=str[i];
        i++;
    }

    printf("%d",i-1); // basicalli i-1 must be the length of string
    
    return 0;
}   