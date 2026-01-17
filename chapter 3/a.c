#include<stdio.h>
#include<math.h>

float si(float p,float r,float t){return (p*r*t)/100;}
float ci(float p,float r,float t){return p*pow(1+r/100,t)-p;}

int main(){
    float p,r,t;
    
    scanf("%f%f%f",&p,&r,&t);
    printf("SI=%.2f\nCI=%.2f",si(p,r,t),ci(p,r,t));
    return 0;
}