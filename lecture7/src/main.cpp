

// //</> code #1
// //=====================
// #include "person.hpp"

// int main() {
//     university::Person person;
//     person.get_attribute_offsets();
// }

// //</> code #3
// //=====================
// #include "person.hpp"
// int main() {
//     university::Person person1;  // default ctor

//     auto person2 = std::make_unique<university::Person>();  // default ctor

//     university::Person person3{// parameterized ctor
//                                "Tim Berners-Lee",
//                                "tim@w3.org",
//                                "617-555-1234",
//                                8, 6, 1955};

//     auto person4 = std::make_unique<university::Person>(  // parameterized ctor
//         "Linus Torvalds",
//         "linus@linux.org",
//         "503-555-5678",
//         28, 12, 1969);
// }

// //</> code #4
// //=====================
// #include "code4.hpp"

// int main(){
//     B b;
// }

// //</> code #5
// //=====================
// #include <iostream>

// #include "code5.hpp"

// int main() {
//     int some_value{43};
//     DemoConstAndRef demo(10, some_value);
// }

// //</> code #7
// //=====================
// #include "code7.hpp"

// int main() {
//     DemoThis demo_this;
//     demo_this.initialize(5).print_value();  // chaining function calls
// }

// //</> code #8, #9, #10, #11, #12
// //=====================
// #include "code8.hpp"
// #include<iostream>

// int MyClass::count = 0;

// int main() {
//     std::cout << MyClass::count << '\n';
// }

// //</> code #13
// //=====================
// #include "code13.hpp"

// int main() {
//     int result{MathUtils::add(3, 4)};  // No need to create a MathUtils object
// }

// //</> code #14
// //=====================
// #include "code14.hpp"

// int main() {
//     auto regular_car = Car::create_regular_car();
//     regular_car.drive();
//     auto sports_car = Car::create_sports_car();
//     sports_car.drive();
// }

// //</> code #15
// // //=====================
// #include "code15.hpp"
// #include<iostream>

// // Definition of static attribute
// int Counter::count = 0;
// int main() {
//     // Increment the counter
//     Counter::increment();
//     Counter::increment();

//     // Print the current count
//     std::cout << "Current count: " << Counter::get_count() << '\n';

//     // Increment the counter again
//     Counter::increment();

//     // Print the updated count
//     std::cout << "Updated count: " << Counter::get_count() << '\n';
// }

//</> code #16
// //=====================
// #include <iostream>

// #include "code16.hpp"

// int main() {
//     {
//         std::cout << "--- First object" << '\n';
//         MyClass* my_class_ptr{new MyClass()};  // Object created!
//         delete my_class_ptr;                   // Object destroyed!
//         std::cout << "--- Second object" << '\n';
//         MyClass my_class;  // Object created!
//     }  // Object destroyed!
// }
