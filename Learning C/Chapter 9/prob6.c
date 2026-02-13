#include <stdio.h>

struct complex{

    int real;
    int imag;
};

void display(struct complex c[]){

    int i;
    for (i=0;i<=5;i++){

        printf("\nComplex number %d = %d + %di \n",i+1,c[i].real,c[i].imag);
    }
}

int main() {

    struct complex c[5];

    int i;

    for(i=0;i<=5;i++){
        printf("enter real part of comple number %d: ",i+1);
        scanf("%d",&c[i].real);
    }

    for(i=0;i<=5;i++){
        printf("enter imaginary part of comple number %d: ",i+1);
        scanf("%d",&c[i].imag);
    }

    display(c);
    return 0;
}