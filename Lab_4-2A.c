#include<stdio.h>
#include<math.h>
int main() {

    unsigned long long int product=1;
    for (int i = 22; i <= 100; i++)
    {
        if (i % 7 == 0)
        {
            product = product * i;
        }
        
    }
    
    printf("Добуток чисел кратних 7 = %.2llu", product);
    return 0;
}