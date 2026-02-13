#include<stdio.h>
int main(){

    int age;
    printf("enter you age: ");
    scanf("%d",age); //#remember of scanf statement
    age>=18?printf("adult") : printf("not adult");  //condition?print..... : print ....(agar pehli true nahi hai toh)  ;
    return 0;
}
