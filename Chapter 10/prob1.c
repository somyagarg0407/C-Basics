#include <stdio.h>

int main() {
    
    int a,b,c;
    FILE *fp;

    fp=fopen("somya.txt","r");

    if(fp==NULL){  // remember using this if for better prograammer
        printf("error finding file");
        return 1;
    }

    fscanf(fp,"%d %d %d",&a,&b,&c);

    fclose(fp);

    printf("three integers are %d %d %d",a,b,c);


    
    return 0;
}