#include<stdio.h>

int main(){

    int age=18;  //declare varibale
    int *ptr=&age;

    printf("%d",age);  //they give same value
    printf("%d",*ptr); //* basically means valur
    printf("%d",*(&age));
    return 0;

}