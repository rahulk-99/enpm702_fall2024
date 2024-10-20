#include "driving/vehicle.hpp"

#include <iostream>
#include <stdexcept>

// Vehicle
void driving::Vehicle::drive(double distance) {
    // if driver does not exist, do not start the engine and do not drive the vehicle
    if (!driver_) {
        std::cerr << "There is no driver for this vehicle...aborting driving\n";
    }

    if (engine_) {
        engine_->start();
        std::cout << driver_->get_name() << " is planning to drive " << distance << " mile(s) with " << color_ << " " << model_ << '\n';
    }
}

void driving::Vehicle::set_driver(std::shared_ptr<driving::Driver> driver) {
    driver_ = driver;
}

// ElectricVehicle
void driving::ElectricVehicle::charge_battery() {
    battery_capacity_ = 100.0;
    std::cout << "Battery charged\n";
}

void driving::ElectricVehicle::drive(double distance) {
    Vehicle::drive(distance);
    // Assume the vehicle consumes a fixed amount of battery per mile
    double battery_consumed = distance * battery_consumption_rate_;

    // Deplete the battery capacity
    battery_capacity_ -= battery_consumed;

    // Ensure battery does not go below 0
    if (battery_capacity_ < 0) {
        battery_capacity_ = 0;
        std::cerr << "Battery depleted! The vehicle cannot continue.\n";
    } else {
        std::cout << "Battery capacity after driving: " << battery_capacity_ << "%\n";
    }
}
