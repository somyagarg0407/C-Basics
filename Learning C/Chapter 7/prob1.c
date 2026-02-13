#include <stdio.h>

int main() {
    
    int arr[1000];
    int i;

    for(i=0;i<1000;i++){
         arr[i]=5*(i+1);
    }

    for(i=0;i<1000;i++){
        printf("the value of 5 X %d is %d \n",i+1,arr[i]);
    }

    return 0;
} 