#include <stdio.h>

    void copy(char sour[],char dest[]){
        int i;
        int j=0;

        while(sour[i]!='\0'){
            dest[j]=sour[i];
            j++;
        }
        dest[j]='\0';
    }

int main() {

    char source[]="Somya garg";
    char destination[20];

    copy(source,destination);

    printf("%s",destination);
    printf("%s",source);
    return 0;
}


 
