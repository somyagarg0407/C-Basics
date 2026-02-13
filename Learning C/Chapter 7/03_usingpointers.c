#include<stdio.h>

int main(){
     
    int marks[]={4,3,5};

    //int* ptr=&marks[0];
    int* ptr=marks; //basically this can use when want address for zerith index

    printf("%d\n",ptr);
    printf("%d\n",&ptr);

    return 0;

}
// you can write array as i[] or *i while function call 
// use for in for for printing matrix type que
//ptr+2 point on the third elemnt of array