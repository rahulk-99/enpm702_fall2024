

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

// //</>--- code #3
// //=====================
// #include <iostream>

// class Temperature {
//    public:
//     // Constructor taking one argument for the temperature in Celsius
//     Temperature(double celsius)
//         : celsius_{celsius} {
//     }

//     double get_celsius() const { return celsius_; }

//    private:
//     double celsius_;
// };

// void test(Temperature celcius) {
//     std::cout << celcius.get_celsius() << '\n';
// }

// int main() {
//     test(36.5);
// }

//</>--- code #4
//=====================
// #include <iostream>

// class Unit {
//    public:
//     Unit(double m, double kg = 0.0, double s = 0.0)
//         : meter_{m}, kg_{kg}, second_{s} {
//     }

//     double get_meter() const {
//         return meter_;
//     }

//    private:
//     double meter_;
//     double kg_;
//     double second_;
// };

// void test(Unit unit) {
//     std::cout << unit.get_meter() << '\n';
// }

// int main() {
//     test(3.5);
// }

//</>--- code #5
//=====================

#include <memory>

#include "driving/date.hpp"
#include "driving/driver.hpp"
#include "driving/engine.hpp"
#include "driving/vehicle.hpp"

int main() {
    // -- testing date of birth
    // driving::Date birthdate{driving::Date(232, 2, 2024)};

    // -- testing Engine object
    // auto engine_ptr = std::make_unique<driving::Engine>(670);
    // engine_ptr->start();

    // -- testing driver object
    auto driver_ptr = std::make_shared<driving::Driver>("George", driving::Date(1, 1, 1988));
    // driver_ptr->print_date_of_birth();
    // driver_ptr->drive_vehicle();
    // driver_ptr->get_birthdate().print_date();

    // auto vehicle_ptr = std::make_shared<driving::Vehicle>("Tesla Model S", "Red", 670);
    // vehicle_ptr->set_driver(driver_ptr);
    // vehicle_ptr->drive(20.76);

    auto ev_ptr = std::make_shared<driving::ElectricVehicle>("Tesla Model S", "Red", 670, 20, 0.2);
    ev_ptr->set_driver(driver_ptr);
    ev_ptr->full_recharge();
    // ev_ptr->display_battery_level();
    // ev_ptr->drive(30000);
}

// //</>--- code #6
// //=====================
// #include "code6.hpp"

// int main(){
//     Base base;

//     DerivedPublic derived_public;
//     derived_public.print_members();

//     DerivedPublic derived_private;
//     derived_private.print_members();

//     DerivedPublic derived_protected;
//     derived_protected.print_members();
// }

// //</>--- code #7
// //=====================

// #include "code7.hpp"

// int main(){
//     Base base(10);
// }

// //</>--- code #8
// //=====================

// #include "code8.hpp"

// int main(){
//     Derived derived(20.5);
// }

// //</>--- code #9
// //=====================

// #include "code9.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }

// //</>--- code #10
// //=====================

// #include "code10.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }

//</>--- code #11
//=====================

// #include "code11.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }


