#include <stdio.h>

int Sign(float x)//Sign приймає дійсне число x
{
    if (x < 0) {
        return -1;
    } else if (x == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main()//У функції main ми викликаємо функцію Sign, передаючи їй число, введене користувачем. Після цього результат виводиться на екран.
{
    float number;
    printf("Введіть число: ");
    scanf("%f", &number);
    int result = Sign(number);
    printf("Значення Sign: %d\n", result);
    
    return 0;
}
