#include<stdio.h>
int main(){

    int day;   //can also use char instead of int use 'x' for characte
    printf("enter your day(1-7): ");
    scanf("%d",&day);

    switch(day) {
        case 1:printf("monday \n");
        break;
        case 2:printf("tues \n");
        break;
        case 3:printf("wed \n");
        break;               // if not apply break then it print all values after that correct value
        default:printf("not valid");  //use default it is like else
    }

    return 0;

}

//you can also use if in existed if and same with switch case it called nested case

//we can compare alphabets among rthem likwe  b>a and value of a is 97  A is 65


