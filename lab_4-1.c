#include<stdio.h>
#include<math.h>

int main(){

    int x, y, z;
    double f;

    printf("Ведіть значення z = ");
    scanf("%d", &z);

    do
    {
    printf("Ведіть значення x = ");
    scanf("%d", &x);

    printf("Ведіть значення y = ");
    scanf("%d", &y);
    
    if (x <= y) {

        printf("x має бути більше y\n");

    } else if (x > y) {
        
        f = pow(x, 2) + pow(z, 2) / sqrt(x - y);
    
    }

    } while (x <= y);

    printf("f = %.2f", f);
    return 0;
}