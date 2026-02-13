#include <stdio.h>

int main() {
    
    char str[6];

    for(int i=0;i<5;i++){
        scanf("%c",&str[i]);
        fflush(stdin); 
     // -----used for remove new line-----
    }

    str[5]='\0';

    printf("%s",str);
    
    return 0;
}