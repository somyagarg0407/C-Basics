#include <stdio.h>

typedef struct complex{
    int real;
    int imag;

}comp;




int main() {
     
    comp c1;
    c1.real=5;
    c1.imag=6;

    printf("the complex number is %d + %di",c1.real,c1.imag);

    return 0;
}