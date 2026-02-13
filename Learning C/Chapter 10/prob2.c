#include <stdio.h>

int main() {

    FILE *fp;

    int num;
    int i;

    printf("Enter the number: ");
    scanf("%d",&num);

    fp=fopen("table.txt","w");

    if(fp==NULL){  // -----------remember using this if for better prograammer--------------
        printf("error finding file");
        return 1;
    }

    fprintf(fp,"Table of %d is \n",num);
    fprintf(fp,"--------------------------------\n");

    for(i=1;i<=10;i++){
        fprintf(fp,"\n %d X %d = %d \n",num,i,(num*i));
    }
 
    fclose(fp);

    return 0;
}