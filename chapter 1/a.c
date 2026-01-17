#include<stdio.h>
#include<math.h>
void roots(double a,double b,double c){
    double d=b*b-4*a*c;
    if(d>=0){
        printf("%lf %lf\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    }else{
        printf("%lf+%lfi %lf-%lfi\n",-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),sqrt(-d)/(2*a));
    }
}
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    roots(a,b,c);
}
