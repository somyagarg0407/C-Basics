#include <stdio.h>

struct vector {
    int x;
    int y;
};

//-------- function that returns sum of two vectors ---------
struct vector sumVector(struct vector v1, struct vector v2) {
    
    struct vector result;

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;
}

int main() {
    struct vector v1 = {10, 5};
    struct vector v2 = {6, 4};

    struct vector sum;

    sum = sumVector(v1, v2);

    printf("Sum of vectors = (%d)i + (%d)j", sum.x, sum.y);

    return 0;
}
