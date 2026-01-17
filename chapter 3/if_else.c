#include<stdio.h>
int main(){

    int age;
    printf("enter you age");
    scanf("%d",age); //#remember of scanf statement

    if(age>=18 && age<=60){
        printf("you are adult");
    }

    else if(age>60){
        printf("you are senior citizen");
    }

    else{
        printf("you are like kid type");
    }


    return 0;
    
// use if ,if,if ....else when there is more than 1 condition can be true and want to check all
// otherwise use if,else if,else if,..... else when want only one is true
 

}

// be remember differenece of = or == 
// 
// 
// 
// #########################if assign x=0 then it will give else case but why??
