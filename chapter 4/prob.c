#include<stdio.h>

int main(){
    int sum=0;
    for(int i=1;i<=5;i=i+1){ //remember curly brackets and semicolon
            sum=sum+i;
    }
    printf("sum is %d",sum);
    return 0;

}

/* can also use for loop as
for(i=1,j=2;i<5 && j<6;i++,j++){.....} 
basically can use two variable

we can also use break by using if under for loop to complterlty exit from loop
if we use condition as only 1 then its means that cond. everytime true
break can break the entire loop even it is nested loop
for skip the particular output use continue 


*/


