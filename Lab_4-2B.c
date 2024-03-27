#include<stdio.h>
#include<math.h>
int main() {

    unsigned long long int product=1;
    int i = 22;
    while (i <= 100)
    {
        if (i % 7 == 0)
        {
            product *= i;
        }
        i++;
    }
   
    
    printf("Добуток чисел кратних 7 = %.2llu", product);
    return 0;
}