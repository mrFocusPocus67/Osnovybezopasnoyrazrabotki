package main

import "fmt"
import "os" // несколько импортов (лучше использовать один import с блоками)

var globalVar int = 10 // глобальная переменная (обычно плохая практика)

const PI = 3.14 // константа не в camelCase (должно быть pi или Pi?)

func main() {
    var x int = 5 // избыточное объявление типа (можно x := 5)
    var y int = 3
    
    result := add(x, y)
    fmt.Println("Result:", result)
    
    // неиспользуемая переменная
    z := 100
    
    // ошибка: проверка err игнорируется
    file, _ := os.Open("test.txt")
}

func add(a int, b int) int { // повторяющийся тип int
    return a + b
}

func unusedFunction() { // неиспользуемая функция
    fmt.Println("Я не вызываюсь")
}

// пустая строка с пробелами    
  
func badFormatting() {
  // отступ в 2 пробела вместо табуляции
  fmt.Println("Привет")
        // лишний отступ
        fmt.Println("Мир")
}

// избыточный return
func getValue() int {
    value := 42
    return value // можно сразу return 42
}




