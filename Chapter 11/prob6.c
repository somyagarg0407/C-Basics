#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int *arr;

    arr=(int*)calloc(5,sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed");
        return 1;
    }

    
    for(int i=0;i<5;i++){
        arr[i]=i+1;
    }

    arr=(int*)realloc(arr,10*sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed");
        return 1;
    }

     for(int i=5;i<10;i++){
        arr[i]=i+1;
    }

    for(int i=0;i<10;i++){
        printf(" %d\n",arr[i]);
    }
    free(arr);



    return 0;
}