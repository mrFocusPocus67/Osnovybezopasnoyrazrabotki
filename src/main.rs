use std::collections::HashMap;
use std::fs::File;
use std::io::Read;

fn unused_function() {
    println!("Эта функция никогда не вызывается");
}

fn main() {
    let x = 10;
    let y = 20;
    let z = x + y;
    
    let value: i32;
    println!("{}", value);
    
    let arr = [1, 2, 3, 4, 5];
    let element = arr[10];  
    
    let mut i = 0;
    loop {
        i += 1;
        // НЕТ break
    }
    
    let a = 10;
    let b = 0;
    let result = a / b; 

    let _ = complex_function(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
}

fn complex_function(a: i32, b: i32, c: i32, d: i32, e: i32, 
                    f: i32, g: i32, h: i32, i: i32, j: i32) -> i32 {
    a + b + c + d + e + f + g + h + i + j
}
struct UnusedStruct {
    field: i32,
}

fn extra_semicolon() {
    let x = 10;;
    println!("{}", x);;
}

fn bad_spaces() {
    let x=10;
    let y=20;
    let z=x+y;
}


