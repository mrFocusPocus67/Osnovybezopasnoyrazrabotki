#include <stdio.h>
#include <stdlib.h>
#include <string.h> // неиспользуемый заголовок

int global = 5; // глобальная переменная

// плохое имя функции
void f() {
    int x = 10;
    int y = 20;
    
    // неиспользуемая переменная
    int z = x + y;
    
    // магические числа
    if (x > 5 && y < 30) {
        printf("x больше 5\n");
    }
    
    // пустой цикл
    for(int i = 0; i < 10; i++) {
        // ничего не делаем
    }
    
    // выход за границы массива
    int arr[5];
    arr[5] = 100; // ошибка: индекс 5 (массив от 0 до 4)
}

// слишком много параметров
void longFunction(int a, int b, int c, int d, int e, int f, int g) {
    printf("%d", a);
}

// нет проверки возврата malloc
void memoryLeak() {
    int *ptr = (int*)malloc(sizeof(int) * 10);
    // забыли free(ptr) - утечка памяти
}

// стиль: смешиваем табуляции и пробелы
void badStyle() {
        int x = 5; // табуляция
    int y = 10; // пробелы
  int z = 15; // 2 пробела
}

int main() {
    // неиспользуемая переменная
    int unused = 0;
    
    f();
    
    // неинициализированная переменная
    int value;
    printf("%d", value); // мусорное значение
    
    // деление на ноль
    int a = 10;
    int b = 0;
    int result = a / b; // ошибка
    
    return 0;
}




