#include <stdio.h>
#include <stdio.h>

int main() {
    char s1[]="somya";
    char s2[]=" garg";

    printf("%d\n",strlen(s1));

    strcat(s1,s2);
    printf("%s\n",s1);

    strcpy(s1,s2);
    printf("%s\n",s1);

    printf("%s\n %s\n",s1,s2);
    int value=strcmp(s1,s2);
    printf("%d",value);
    return 0;
}