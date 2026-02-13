#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int *arr;

    arr=(int*)calloc(6,sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed");
        return 1;
    }

    printf("Array elements (default values):\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n ", arr[i]);
    }

    free(arr);

    return 0;
}