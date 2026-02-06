#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int marks[5]={100,99,95,102,98};

    int max=marks[0];
    int min=marks[0];

    for(int i=1;i<5;i++){
        if(marks[i]>max){
            max=marks[i];
        }

        else if(marks[i]<min){
            min =marks[i];
        }
    }

    printf("The maximum marks in last semester is: %d\n", max);
    printf("The minimum marks in last semester is: %d\n", min);





    return 0;
}