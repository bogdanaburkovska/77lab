#include <stdio.h>
#include <stdlib.h>

// Функція для знаходження максимального за модулем елемента масиву
int findMaxAbsolute(int arr[], int size)//findMaxAbsolute для знаходження максимального за модулем елемента масиву
{
    int max = abs(arr[0]);
    
    for (int i = 1; i < size; i++) {
        int absoluteValue = abs(arr[i]);
        if (absoluteValue > max) {
            max = absoluteValue;
        }
    }
    
    return max;
}

// Функція для знаходження суми елементів масиву, розташованих після останнього нульового елемента
int sumAfterLastZero(int arr[], int size) {
    int sum = 0;
    int lastIndex = -1;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            lastIndex = i;
        }
        if (lastIndex != -1 && i > lastIndex) {
            sum += arr[i];
        }
    }
    
    return sum;
}

// Функція для ініціалізації масиву випадковими числами з діапазону [-100;100]
void initializeArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 201 - 100;
    }
}

// Функція для виведення масиву на екран
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()//У функції main ми спочатку ініціалізуємо масив, потім виводимо його на екран, викликаємо функції для знаходження максимального за модулем елемента та суми елементів після останнього нульового елемента, і виводимо результати.
{
    const int SIZE = 10; // Розмір масиву
    int array[SIZE];
    
    // Ініціалізація масиву
    initializeArray(array, SIZE);
    
    // Виведення масиву на екран
    printf("Масив:\n");
    printArray(array, SIZE);
    
    // Знаходження максимального за модулем елемента масиву
    int maxAbsolute = findMaxAbsolute(array, SIZE);
    printf("Максимальний за модулем елемент масиву: %d\n", maxAbsolute);
    
    // Знаходження суми елементів масиву, розташованих після останнього нульового елемента
    int sumAfterZero = sumAfterLastZero(array, SIZE);
    printf("Сума елементів після останнього нульового елемента: %d\n", sumAfterZero);
    
    return 0;
}
