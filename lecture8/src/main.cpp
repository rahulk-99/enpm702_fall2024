


// //</>--- code #1
// //=====================

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

//</>--- code #3
//=====================

// #include "date.hpp"
// #include "engine.hpp"
// #include "driver.hpp"
// #include "vehicle.hpp"

// int main() {
//     // driving::Date birthdate{driving::Date(29, 2, 2024)};

//     // auto engine_ptr = std::make_unique<driving::Engine>(670);
//     // engine_ptr->start();

//     auto driver_ptr = std::make_shared<driving::Driver>("George", driving::Date(1, 1, 1988));
//     // driver_ptr->drive_vehicle();
//     // driver_ptr->get_birthdate().print_date();

//     auto vehicle_ptr = std::make_shared<driving::Vehicle>("Tesla Model S", "Red", 670);
//     vehicle_ptr->set_driver(driver_ptr);
//     vehicle_ptr->drive();
// }

// //</>--- code #4
// //=====================
// #include "code4.hpp"

// int main(){
//     Base base;

//     DerivedPublic derived_public;
//     derived_public.print_members();

//     DerivedPublic derived_private;
//     derived_private.print_members();

//     DerivedPublic derived_protected;
//     derived_protected.print_members();
// }

// //</>--- code #5
// //=====================

// #include "code2.hpp"

// int main(){
//     Base base(10);
// }

// //</>--- code #6
// //=====================

// #include "code6.hpp"

// int main(){
//     Derived derived(20.5);
// }

// //</>--- code #7
// //=====================

// #include "code7.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }

// //</>--- code #8
// //=====================

// #include "code8.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }

//</>--- code #9
//=====================

// #include "code9.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }
