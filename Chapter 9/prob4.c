#include <stdio.h>

struct student{
     int marks;
    
};

int main() {

    struct student *ptr;  
    (*ptr).marks=50;
    printf("marks of s1 is %d\n",(ptr->marks));
    printf("marks of s1 is %d",((*ptr).marks));
    return 0;
}