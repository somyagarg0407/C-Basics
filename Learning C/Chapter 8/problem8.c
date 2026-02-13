#include <stdio.h>
//-----------find the occurence of the letter a-------------

int main() {

    char str[10];
    printf("enter the input word :");
    gets(str);

    int i=0;
    int count=0;

    while(str[i]!='\0'){

        if(str[i]=='a'){
            count++;
        }
        i++;
    } 
    printf("number of occurance of 'a' is %d",count); 
    
    return 0;
}