#include<stdio.h>

int main(){
     
    int a=5;
    int *ptr=&a;

    printf("address of a %p\n",&a);
    printf("address of a %p\n",ptr); // here only write "ptr"

    ptr++; // here it increase as the size of datatype of ptr
    printf("valuer of ptr %p\n",ptr);

    return 0;

}
//even if we a is char then use *ptr as also char even it is address in int ,but use %d while print that ptr
//use %p when you want address in hexadecimal form
// int *ptr=&marks[0] is same as int*ptr=marks  
        