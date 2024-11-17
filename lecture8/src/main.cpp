

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
//     // int result = divide(10, 0);  // This will throw an exception
//     // std::cout << "Result: " << result << '\n';
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

// #include <iostream>
// #include <memory>

// #include "driving/date.hpp"
// #include "driving/driver.hpp"
// #include "driving/engine.hpp"
// #include "driving/vehicle.hpp"

// int main() {
//     //-- test Date class
//     // try {
//     //     driving::Date birthdate{driving::Date(28, 2, 2025)};
//     // } catch (const std::invalid_argument& e) {
//     //     std::cerr << e.what() << '\n';
//     // }

//     //-- test Engine class
//     // driving::Engine engine(260);
//     // engine.start();

//     //-- test Driver class
//     // driving::Driver alain("Alain Prost", driving::Date{2, 2, 1985});
//     // alain.drive_vehicle();
//     // std::cout << alain.get_name() << '\n';

//     auto hamilton = std::make_shared<driving::Driver>("Lewis Hamilton", driving::Date{2, 2, 1985});

//     auto tesla = std::make_shared<driving::Vehicle>("Model S", "Red", 260);
//     hamilton->set_vehicle(tesla);
//     // tesla.set_driver(hamilton);

// }

//</>--- code #4
//=====================
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

//</>--- code #5
//=====================

// #include "code5.hpp"

// int main(){
//     Base base;
// }

//</>--- code #6, #7, #8, #9
//=====================

// #include "code6_7_8_9.hpp"

// int main(){
//     Derived derived(20.5, 10);
// }

//</>--- code #10, #11
//=====================

#include <iostream>
#include <memory>
#include <stdexcept>
#include <vector>

#include "driving/date.hpp"
#include "driving/driver.hpp"
#include "driving/engine.hpp"
#include "driving/vehicle.hpp"

// definitions

// void test_drive(std::shared_ptr<driving::Vehicle> vehicle, double distance) {
//     vehicle->drive(distance);
// }


int main() {
    // // ---------------------------------
    // // -- Testing ElectricVehicle object
    // // ---------------------------------
    // // driver
    // auto lewis_hamilton = std::make_shared<driving::Driver>("Lewis Hamilton", driving::Date(7, 1, 1985));
    // // vehicle
    // auto tesla_model_s = std::make_shared<driving::ElectricVehicle>("Tesla Model S", "Red", 670, 20, 0.2);
    // tesla_model_s->set_driver(lewis_hamilton);
    // tesla_model_s->full_recharge();
    // tesla_model_s->display_battery_level();
    // tesla_model_s->drive(30000);

    // ---------------------------------
    // -- Testing GasolineVehicle object
    // ---------------------------------
    // // driver
    // auto alain_prost = std::make_shared<driving::Driver>("Alain Prost", driving::Date(24, 2, 1955));
    // // vehicle
    // auto ford_mustang = std::make_shared<driving::GasolineVehicle>("Ford Mustang", "Black", 300, 60.0, 0.12);
    // ford_mustang->set_driver(alain_prost);
    // ford_mustang->drive(200);
    // ford_mustang->refuel();

    // ---------------------------------
    // -- Testing runtime polymorphism
    // ---------------------------------

    // // Type alias
    // using Gas = driving::GasolineVehicle;
    // using Electric = driving::ElectricVehicle;

    // // // First vehicle
    // auto lewis = std::make_shared<driving::Driver>("Lewis Hamilton", driving::Date(7, 1, 1985));
    // auto model_s = std::make_shared<Electric>("Tesla Model S", "Red", 670, 20, 0.2);
    // model_s->set_driver(lewis);

    // // Second vehicle
    // auto alain = std::make_shared<driving::Driver>("Alain Prost", driving::Date(24, 2, 1955));
    // auto mustang = std::make_shared<Gas>("Ford Mustang", "Black", 300, 60.0, 0.12);
    // mustang->set_driver(alain);

    // // // Which drive() is used?
    // // // model_s->drive(2000);
    // // // std::cout << "================" << '\n';
    // // // mustang->drive(2000);

    // // All vehicle types
    // test_drive(model_s, 2000);
    // std::cout << "================" << '\n';
    // test_drive(mustang, 3000);

    // std::vector<std::shared_ptr<driving::Vehicle>> v;
}

//</>--- code #12
//=====================

// #include <memory>

// #include "code12.hpp"

// int main() {
//     {
//         std::unique_ptr<Base> ptr = std::make_unique<Derived>();
//     }  // pointer goes out of scope here
// }

//</>--- code #13
//=====================

// #include "code13.hpp"
// #include<vector>

// void check(Base b) {
//     b.test();
// }

// int main() {
//     Derived derived;
//     // Base& base{derived};
//     check(derived);
// }