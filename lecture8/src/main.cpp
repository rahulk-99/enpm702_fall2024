

// #include <iostream>
// #include <stdexcept>

// int divide(int numerator, int denominator) {
//     if (denominator == 0) {
//         throw std::invalid_argument("Error: Division by zero!");
//     }
//     return numerator / denominator;
// }

// int main() {
//     try {
//         int result = divide(10, 0);  // This will throw an exception
//         std::cout << "Result: " << result << '\n';
//     } catch (const std::invalid_argument& e) {
//         std::cerr << e.what() << '\n';
//     }
// }

// //</>--- code #2
// //=====================

// #include <iostream>
// #include <stdexcept>

// void check_number(int num) {
//     if (num == 0) {
//         throw std::invalid_argument("Error: Number cannot be zero!");
//     } else if (num < 0) {
//         throw std::out_of_range("Error: Number cannot be negative!");
//     } else {
//         std::cout << "Valid number: " << num << '\n';
//     }
// }

// int main() {
//     try {
//         check_number(0);   // Throws invalid_argument
//         check_number(-5);  // Throws out_of_range
//     } catch (const std::invalid_argument& e) {
//         std::cerr << e.what() << '\n';
//     } catch (const std::out_of_range& e) {
//         std::cerr << e.what() << '\n';
//     }
// }

// //</>--- code #3
// //=====================

// #include "code3.hpp"

// int main(){
//     Base base;

//     DerivedPublic derived_public;
//     derived_public.print_members();

//     DerivedPublic derived_private;
//     derived_private.print_members();

//     DerivedPublic derived_protected;
//     derived_protected.print_members();
// }

// //</>--- code #2
// //=====================

// #include "code2.hpp"

// int main(){
//     Base base(10);
// }

// //</>--- code #3
// //=====================

// #include "code3.hpp"

// int main(){
//     Derived derived(20.5);
// }

// //</>--- code #4
// //=====================

// #include "code4.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }

// //</>--- code #5
// //=====================

// #include "code5.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }

//</>--- code #6
//=====================

// #include "code6.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }

//</>--- code #7
//=====================
// #include "person.hpp"

// int main(){
//     university::Person john = university::Person(
//         "John Doe",
//         "john.doe@umd.edu",
//         "555-555-5555",
//         12, 1, 1980);
// }