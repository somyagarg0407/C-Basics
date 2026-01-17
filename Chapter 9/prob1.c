#include <stdio.h>

struct vector{
    int x;
    int y;
}; //-----------very imp to apply semicolon-------------


int main() {
    struct vector v1;
    v1.x=3;
    v1.y=5;

    printf("vector v1 is (%d,%d)",v1.x,v1.y);
    return 0;
}