#include <stdio.h>

struct complex{
    int real;
    int imag;

};




int main() {
     
    struct complex c1;
    c1.real=5;
    c1.imag=6;

    printf("the complex number is %d + %di",c1.real,c1.imag);

    return 0;
}