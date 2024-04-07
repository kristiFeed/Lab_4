
#include<stdio.h>
#include<math.h>

int main() {

    int b; 
    
    do {
        
        int i = 22;
        unsigned long long int product = 1;

        printf("\nОберіть, що ви хочете зробити:\n");
        printf("\n1. Запустити перший цикл\n");
        printf("2. Запустити другий цикл\n");
        printf("3. Запустити третій цикл\n");
        printf("0. Вийти з програми\n");
        printf("\nВведіть номер опції: ");
        scanf("%d", &b);

        switch (b) {
            case 1:
                for (int i = 22; i <= 100; i++) {
                    if (i % 7 == 0) {
                        product *=  i;
                    }
                }
                break;

            case 2:
                while (i <= 100) {
                    if (i % 7 == 0) {
                        product *= i;
                    }
                    i++;
                }
                break;

            case 3:
                do {
                    if (i % 7 == 0) {
                        product *= i; 
                    }
                    i++;
                } while (21 < i && i <= 100);
                break;

            case 0:
                printf("Програма завершила свою роботу\n");
                break;

            default:
                printf("Неправильна цифра\n");
                break;
        }
    if (b > 0 && b < 4)
    {
         printf("Добуток чисел, кратних 7 = %.2llu\n", product);
    }
    
    } while (b != 0);

    return 0;
}
