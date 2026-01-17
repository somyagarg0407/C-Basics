#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;

    arr=(int*)malloc(6*sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter 6 required integer: ");
    for(int i=0;i<=5;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<=5;i++){
        printf("stored intergers are %d\n",arr[i]);
    }

    return 0;
}