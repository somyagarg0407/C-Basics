#include <stdio.h>

void slice(char str[],int m,int n){

    int i,j=0;
    for(i=m;i<=n&&str[i]!='\0';i++){

        str[j]=str[i];
        j++;

    }

    str[j]='\0';
}

int main() {

    char str[]="Somya garg";
    slice(str,1,8);
    printf("%s",str);
    return 0;
}