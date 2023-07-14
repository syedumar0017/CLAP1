#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float tractLand;

    scanf("%f", &tractLand);

    float acre = tractLand / 43560;

    printf("%.2f sq.ft is equal to %.2f acres", tractLand, acre);
    printf("hello from Umar");
    return 0;

}
