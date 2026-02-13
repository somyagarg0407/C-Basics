#include<stdio.h>

void printhello(); //function declaration/prototype

void printhello(){ // function definition
    printf("hello \n");  // here not write return
}

int main(){    // function call
    printhello();
    printhello();
    printhello();
    printhello();
    printhello();
    return 0; // return in main is imp
}

// we can call  func. even before define it
// void sum();
// void sum(n);
// int sum(inta,int b);