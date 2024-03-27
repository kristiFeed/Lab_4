#include <stdio.h>
#include <math.h>

int main() {
    const double P = 3.14159265358979323846;
   double a = - P / 2;
    double b = -3 * P / 2;
    double dx = P / 10;
    double y, x;

    printf("x\t|\t y = f(x)\n");
    printf("-----------------------\n");

    while (x>=b)
    {
        
        y = pow(x, 2) * cos(x);

        printf("%.2f\t|\t %.2f\n", x, y);
        x = x - dx;
    }
    

    return 0;
}
