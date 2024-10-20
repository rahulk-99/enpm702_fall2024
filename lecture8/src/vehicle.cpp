#include "driving/vehicle.hpp"

#include <chrono>  // For std::chrono::milliseconds
#include <iostream>
#include <thread>  // For std::this_thread::sleep_for

// ===========================================
// Vehicle
// ===========================================

// ===========================================
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

// ===========================================
void driving::Vehicle::set_driver(std::shared_ptr<driving::Driver> driver) {
    driver_ = driver;
}

// ===========================================
void driving::ElectricVehicle::display_battery_level() const {
    std::cout << "Battery level: " << battery_level_ << "kWh\n";
}

// ===========================================
void driving::ElectricVehicle::full_recharge() {
    // Let's assume the max battery level is 100.0 kWh
    constexpr double amount{100.0};

    std::cout << "Starting recharge...\n";
    std::cout << "Current battery level: " << battery_level_ << " kWh.\n";
    // Calculate the total recharge time based on battery capacity
    // Let's assume it takes 5 seconds for full charge:
    // from 0.0 kWh to 100.0 kWh
    constexpr int total_recharge_time{5};

    double remaining_capacity = battery_capacity_ - battery_level_;
    double charge_amount = std::min(amount, remaining_capacity);

    // Calculate the charging time for the given amount (proportional to charge needed)
    int charging_time = static_cast<int>((charge_amount / battery_capacity_) * total_recharge_time);
    double charge_per_second = charge_amount / charging_time;

    for (int i = 1; i <= charging_time; ++i) {
        // Simulate time passing for each second of charging
        std::this_thread::sleep_for(std::chrono::seconds(1));

        // Increment the battery level
        battery_level_ += charge_per_second;
        if (battery_level_ > battery_capacity_) {
            battery_level_ = battery_capacity_;
        }

        // Display progress bar
        driving::ElectricVehicle::display_progressbar(i, charging_time);

        // Check if battery is fully charged
        if (battery_level_ >= battery_capacity_) {
            std::cout << "\nBattery is fully charged.\n";
            break;
        }
    }

    std::cout << "\nRecharge complete. Current battery level: " << battery_level_ << " kWh.\n";
}

// ===========================================
// ElectricVehicle
// ===========================================

// ===========================================
void driving::ElectricVehicle::display_progressbar(int current, int total) {
    int barWidth = 50;
    double progress = (double)current / total;

    std::cout << "[";
    int pos = barWidth * progress;
    for (int i = 0; i < barWidth; ++i) {
        if (i < pos)
            std::cout << "=";
        else if (i == pos)
            std::cout << ">";
        else
            std::cout << " ";
    }
    std::cout << "] " << int(progress * 100.0) << "%\r";
    std::cout.flush();
}

// ===========================================
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

// GasolineVehicle
// void driving::GasolineVehicle::refuel() {
//     battery_capacity_ = 100.0;
//     std::cout << "Battery charged\n";
// }

// void driving::ElectricVehicle::drive(double distance) {
//     Vehicle::drive(distance);
//     // Assume the vehicle consumes a fixed amount of battery per mile
//     double battery_consumed = distance * battery_consumption_rate_;

//     // Deplete the battery capacity
//     battery_capacity_ -= battery_consumed;

//     // Ensure battery does not go below 0
//     if (battery_capacity_ < 0) {
//         battery_capacity_ = 0;
//         std::cerr << "Battery depleted! The vehicle cannot continue.\n";
//     } else {
//         std::cout << "Battery capacity after driving: " << battery_capacity_ << "%\n";
//     }
// }
