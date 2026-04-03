#include <iostream>
#include <cstdlib>
int main() {
    //(нет delete[])
    int** matrix = new int*[5];  // массив указателей
    
    //(C++ с C-style cast)
    for(int i = 0; i < 5; i++) {
        matrix[i] = (int*)malloc(sizeof(int) * 5);  // C-style cast
    }
    
    // Выход за границы массива (индекс 5)
    for(int i = 0; i <= 5; i++) {  // должно быть i < 5
        for(int j = 0; j <= 5; j++) {  // должно быть j < 5
            matrix[i][j] = i * j;  // ПЕРЕПОЛНЕНИЕ СТЕКА при i=5 или j=5
        }
    }

    // Нет пробелов вокруг операторов  
    int x=10;
    int y=20;
    int z=x+y;
    
    // Неинициализированная переменная
    int value;
    std::cout << value << std::endl;  // мусорное значение
    
    // Пустой цикл (ничего не делает)
    for(int i = 0; i < 10; i++) {
		
    }
    
    // Отступ в 2 пробела вместо 4
  std::cout << "Hello" << std::endl;

    // Утечка памяти (не удалили matrix)
    // Нет delete[] matrix и delete[] для каждой строки
    
    return 0;
};
