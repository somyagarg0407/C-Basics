#include<stdio.h>

int main(){

    int age=18;  //declare varibale
    int *ptr=&age; // *ptr assign the address of age and here int shows that which type of variable's adress we store in  our ptr
    int _age=*ptr; //_age get the value of adreess of age which already store n ptr 
     
    printf("%d\n",_age);
    printf("%p\n",&age); //&age and ptr same for use %p bu remember to not use only variable like age use &age
    printf("%p\n",ptr);  //here p gives hexadecimal address
    printf("%u\n",ptr);  //here u gives readable value of adress
    
    return 0;
  
}// can also print &ptr in %p or in %u
// use (variable)++ like this
//you can aalso use pointer to pointer which store other pointer address bu using     **pptr
// call func byvalue not affect the actual value in int main function
//but the call by referrance means use 8 n intead of n affect the value evn in  main functin means it chanfges permanently
//call func by call main address of same variable bhi alg hi hoga kyunkui usme vo ek copy of variable banat ahai therefore address alag hoga
//use pass by referencve when you wnat to get so many outpu form compiler use pointer in referance all
