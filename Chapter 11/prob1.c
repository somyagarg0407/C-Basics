#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *arr;

    arr=(int*)malloc(6*sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed");
        return 1;
    }

    printf("Memory allocation Successful");

    free(arr);//#####################################################

    return 0;

}