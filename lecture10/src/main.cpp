

#include <functional>
#include <iostream>

//</>--- Function Pointers - code #1
//====================================
// int add(int a, int b) { return a + b; }

// int main() {
//     // Declaring a function pointer and assigning it to 'add'
//     int (*ptr)(int, int) = &add;  // ptr is now a callable

//     // Call add through ptr
//     int result_dereference = (*ptr)(5, 10);      // Using dereference
//     int result_direct = ptr(5, 10);  // Direct invocation

//     std::cout << "Result: " << result_dereference << '\n';
//     std::cout << "Result: " << result_direct << '\n';
// }

//</>--- Function Pointers - code #2
// //================================================

// int add(int a, int b) { return a + b; }
// int subtract(int a, int b) { return a - b; }
// int multiply(int a, int b) { return a * b; }

// int main() {
//     // Create an std::array of function pointers for the operations
//     std::array<int (*)(int, int), 3> operations = {add, subtract, multiply};
//     std::cout << "Result: " << operations[1](20, 10) << '\n';
// }

//</>--- Function Pointers - code #3
//================================================
// void execute_cb(int x, int y, int (*callback)(int, int)) {
//     auto result = callback(x, y);
//     std::cout << "Result: " << result << '\n';
// }

// int add(int a, int b) { return a + b; }

// int main() {
//     execute_cb(10, 5, add);  // Passing 'add' function as a parameter
// }

// //</>--- Function Pointers - Exercise
// //================================================

// // Define the functions for different operations
// int add(int a, int b) { return a + b; }
// int subtract(int a, int b) { return a - b; }
// int multiply(int a, int b) { return a * b; }
// int divide(int a, int b) {
//     if (b == 0) {
//         std::cerr << "Error: Division by zero\n";
//         return 0;
//     }
//     return a / b;
// }

// // Array of function pointers corresponding to the operations
// int (*operations[])(int, int) = {add, subtract, multiply, divide};

// int main() {
//     int num1{};
//     int num2{};
//     int choice{};

//     std::cout << "Enter first number: ";
//     std::cin >> num1;
//     std::cout << "Choose an operation (0: +, 1: -, 2: *, 3: /): ";
//     std::cin >> choice;
//     std::cout << "Enter second number: ";
//     std::cin >> num2;

//     if (choice < 0 || choice > 3) {
//         std::cerr << "Invalid operation choice!\n";
//         return 1;
//     }

//     // Call the selected operation using the function pointer array
//     int result = operations[choice](num1, num2);
//     std::cout << "Result: " << result << '\n';
// }

// //</>--- Function Pointers - code #4
// //================================================
// int add(int a, int b) { return a + b; }

// void execute_cb(int x, int y, std::function<int(int, int)> callback) {
//     std::cout << "Result: " << callback(x, y) << '\n';
// }

// int main() {
//     int (*add_ptr)(int, int) = add;
//     execute_cb(10, 5, add_ptr);

//     std::function<int(int, int)> callback = add_ptr;
//     execute_cb(10, 5, callback);
// }

//</>--- Functors - code #5
//====================================
// class Adder {
//    public:
//     Adder(int inc) : increment_{inc} {}
//     // Overloaded operator() to make this class a functor
//     int operator()(int value) const { return value + increment_; }

//    private:
//     int increment_;  // Private member to store the increment value
// };

// int main() {
//     Adder adder(10);
//     std::cout << adder(3) << '\n';
// }

// //</>--- Functors - code #6
// //====================================
// class Adder {
//    public:
//     Adder(int inc) : increment_{inc} {}
//     // Overloaded operator() to make this class a functor
//     int operator()(int value) const { return value + increment_; }

//    private:
//     int increment_;  // Private member to store the increment value
// };

// void execute_cb(int x, const Adder& callback) {
//     std::cout << "Result: " << callback(x) << '\n';
// }

// int main() {
//     Adder adder(10);
//     execute_cb(3, adder);
// }

//</>--- Functors - code #7
//====================================
// class Adder {
//    public:
//     Adder(int inc) : increment_{inc} {}
//     // Overloaded operator() to make this class a functor
//     int operator()(int value) const { return value + increment_; }

//    private:
//     int increment_;  // Private member to store the increment value
// };

// void execute_cb(int x, const std::function<int(int)>& callback) {
//     std::cout << "Result: " << callback(x) << '\n';
// }

// int main() {
//     Adder adder(10);
//     execute_cb(3, adder);
// }

//</>--- Lambda Functions - code #8
//===========================================
// int main() {
//     int x = 10;
//     int y = 20;

//     // Empty capture list
//     auto empty_capture = [](int a, int b) {
//         std::cout << "Empty capture: a + b = " << a + b << '\n';
//     };
//     empty_capture(3, 4);  // Output: 7

//     // Capture x and y by value
//     auto capture_by_value = [x, y](int a) {
//         std::cout << "Capture by value: x + y + a = " << x + y + a << '\n';
//     };
//     capture_by_value(5);  // Output: 35

//     // Capture x and y by reference
//     auto capture_by_reference = [&x, &y](int a) {
//         x += a;
//         y += a;
//         std::cout << "Capture by reference: x = " << x << ", y = " << y << '\n';
//     };
//     capture_by_reference(5);  // Modifies x and y: Output: x = 15, y = 25

//     // Capture all by value
//     auto capture_all_by_value = [=](int a) {
//         std::cout << "Capture all by value: x + y + a = " << x + y + a << '\n';
//     };
//     capture_all_by_value(5);  // Output: 35

//     // Capture all by reference
//     auto capture_all_by_reference = [&](int a) {
//         x += a;
//         y += a;
//         std::cout << "Capture all by reference: x = " << x << ", y = " << y << '\n';
//     };
//     capture_all_by_reference(10);  // Modifies x and y: Output: x = 25, y = 35

// }

// //</>--- Lambda Functions - code #9
// //===========================================
// // Function that accepts a callback of type std::function
// void execute_cb(int x, const std::function<int(int)>& callback) {
//     std::cout << "Result: " << callback(x) << '\n';
// }

// int main() {
//     // Passing a lambda expression as a callback
//     execute_cb(5, [](int value) { return value * 2; });

//     // Another example with a different lambda
//     execute_cb(10, [](int value) { return value + 10; });
// }

// //</>--- std::bind - code #10
// //===========================================
// int add(int x, int y) {
//     return x + y;
// }

// int main() {
//     // Bind the first argument to 10, leaving the second argument to be provided later
//     auto add_ten = std::bind(add, 10, std::placeholders::_1);

//     // Call the bound function with the remaining argument
//     std::cout << "Result: " << add_ten(5) << '\n';  // Output: 10 + 5 = 15
// }

// //</>--- std::bind - code #11
// //===========================================
// class Multiplier {
//    public:
//     int multiply(int x, int y) const { return x * y; }
// };

// int main() {
//     Multiplier multiplier;

//     // Bind the multiply method, setting the first argument to 10
//     auto times_ten = std::bind(&Multiplier::multiply,
//                                multiplier, 10, std::placeholders::_1);

//     std::cout << "Result: " << times_ten(5) << '\n';  // Result: 50
// }

// //</>--- std::bind - code #12
// //===========================================

// class Calculator {
//    public:
//     // Member function that adds two numbers
//     int add(int a, int b) { return a + b; }
// };

// // Function that accepts a callback
// void execute_cb(int x, const std::function<int(int)>& callback) {
//     std::cout << "Result: " << callback(x) << '\n';
// }

// int main() {
//     Calculator calc;  // Create an instance of Calculator

//     // Bind the first argument of `add` to 10, leaving the second argument as a placeholder
//     auto bound_add = std::bind(&Calculator::add, calc, 10, std::placeholders::_1);

//     // Pass bound_add as a method to execute_cb
//     execute_cb(20, bound_add);  // Equivalent to calc.add(10, 20)
// }