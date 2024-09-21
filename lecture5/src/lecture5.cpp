/**
 * @file lecture5.cpp
 * @author Zeid Kootbally (zeidk@umd.edu)
 * @brief Code for lecture on Functions
 * @version 0.1
 * @date 2024-09-21
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>

//</> 1
//=====================

// int main() {
// }

//</> 2
//=====================

// // function declaration/prototype
// int add(int a, int b);

// // function definition/implementation
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     std::cout << add(1, 2) << '\n';
// }

//</> 3
//=====================
// function prototypes
void print_hello();
void print_world();

// function definitions
void print_world() {
    std::cout << "world\n";
}

void print_hello() {
    std::cout << "hello, ";
    print_world();
}

int main() {
    print_hello();
    std::cout << "exit main\n";
}
