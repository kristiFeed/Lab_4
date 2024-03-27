#include <stdio.h>
#include <math.h>

int main() {

    int i, j;
    int s = 0;
    double p = 1; 
    float res = 0;
    
    for (i = 1; i <= 20; i++) {

        s += i;
        
    }
    for (j = 1; j <= 10; j++) {

        p = p * j;
        
    }

    res = p * s * (j / 2);

    printf("Res = %.1f\n", res);

    return 0;
}
