#include<stdio.h>
#include<math.h>
int main() {

    unsigned long long int product=1;
    int i=22;
    do
    {
        if (i % 7 == 0 && i!=21)
        {
            
            product *= i; 

        }
        i++;
    } while ( 21 < i && i <= 100);
    
    printf("Добуток чисел кратних 7 = %.2llu", product);
    return 0;
}