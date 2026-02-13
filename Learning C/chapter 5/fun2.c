#include<stdio.h>

int sum(int a,int b);

int main(){
    int a,b;
    printf("enetr number a ");
    scanf("%d",&a);
    printf("enetr number b ");
    scanf("%d",&b);

    int s=sum(a,b);  //here we call the fun..
    printf("sum is %d",s);
    return 0;

}

int sum(int x,int y){   // concept of changing a and b to x and y is imp....
    return x+y;
}
//remember to use <math.h>
// use return while definition of functiopn
//return value during define of function is vvery important
//fibonacci means sum of its 2 preceding term 