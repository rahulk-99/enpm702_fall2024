#pragma once

#include <iostream>
#include <memory>
#include <stdexcept>

#include "driver.hpp"
#include "engine.hpp"

namespace driving {
class Driver;
class Engine;

class Vehicle {
   public:
    Vehicle(const std::string& model, const std::string& color, int horsepower)
        : model_{model}, color_{color}, engine_{std::make_unique<driving::Engine>(horsepower)} {
    }

    void drive(double distance);
    void set_driver(std::shared_ptr<driving::Driver> driver);

   protected:
    std::string model_;
    std::string color_;
    std::unique_ptr<driving::Engine> engine_;
    std::shared_ptr<driving::Driver> driver_ = nullptr;

};  // class Vehicle

/**
 * @brief Represents an electric vehicle, derived from the base Vehicle class.
 *
 * The ElectricVehicle class extends the Vehicle class and adds attributes
 * and methods related to managing the battery and energy consumption of the vehicle.
 */
class ElectricVehicle : public Vehicle {
   public:
    /**
     * @brief Fully recharge the vehicle's battery.
     *
     * This method sets the battery level to the maximum capacity (`battery_capacity_`).
     * It simulates the process of recharging the electric vehicle until the battery is fully charged.
     */
    void full_recharge();

    /**
     * @brief Drive the vehicle for a given distance.
     *
     * This method simulates driving the electric vehicle over a specified distance.
     * The battery consumption is calculated based on the `battery_consumption_rate_` and
     * the distance traveled. The battery level is reduced accordingly.
     *
     * @param distance The distance to drive the vehicle, measured in kilometers (or miles).
     *
     * @note If the battery level becomes too low to complete the distance, the vehicle may stop prematurely.
     */
    void drive(double distance);

    /**
     * @brief Display the current battery level.
     *
     * This method displays the current battery charge level of the vehicle in kilowatt-hours (kWh). It provides a visual representation of how much energy is remaining in the battery.
     *
     * @note The battery level is always displayed in kWh, regardless of the unit system used for other metrics.
     */
    void display_battery_level() const;

    /**
     * @brief Constructor to initialize an ElectricVehicle object.
     *
     * This constructor initializes an electric vehicle with the given model, color, horsepower, battery level, and battery consumption rate. It also initializes the base class `Vehicle` with the provided model, color, and horsepower.
     *
     * @param model The model name of the electric vehicle.
     * @param color The color of the electric vehicle.
     * @param horsepower The horsepower of the electric vehicle.
     * @param battery_level The initial charge level of the battery (in kWh).
     * @param consumption_rate The rate at which the battery is consumed during driving (kWh per kilometer or mile).
     */
    ElectricVehicle(const std::string& model, const std::string& color, int horsepower, double battery_level, double consumption_rate)
        : Vehicle(model, color, horsepower),
          battery_consumption_rate_{consumption_rate} {
        // Check that battery_level > 0 and < battery_capacity_
        if (battery_level > 0 or battery_level < battery_capacity_) {
            battery_level_ = battery_level;
        } else {
            throw std::out_of_range("Battery level is negative or above battery capacity");
        }
    }

   private:
    /**
     * @brief The current amount of energy stored in the battery.
     *
     * The battery level is measured in kilowatt-hours (kWh).
     * It represents the current charge of the vehicle's battery.
     *
     * @note The value of this variable should always be in the range [0, battery_capacity_].
     */
    double battery_level_;

    /**
     * @brief The maximum capacity of the vehicle's battery.
     *
     * This constant represents the full charge capacity of the battery in kilowatt-hours (kWh).
     * It defines the upper bound of how much energy the battery can store.
     *
     * @note The maximum capacity is set to 100.0 for all electric vehicles
     */
    double battery_capacity_{100};
    /**
     * @brief The rate at which the battery is consumed during operation.
     *
     * This attribute represents the battery consumption rate, typically measured
     * in kilowatt-hours (kWh) per kilometer (or mile, depending on the system).
     * It indicates how much energy the vehicle consumes per unit of distance traveled.
     *
     * @note The value should be positive and realistic for the given electric vehicle.
     * It can be adjusted based on the efficiency of the vehicle or driving conditions.
     */
    double battery_consumption_rate_;

    /**
     * @brief Display a simple progress bar.
     *
     * This static method is used to display a progress bar in the terminal.
     * It takes in the current progress and total amount, and updates the terminal with a visual representation of the progress.
     *
     * @param current The current progress amount (e.g., how much work is completed).
     * @param total The total amount to be completed.
     */
    static void display_progressbar(int current, int total);
};  // ElectricVehicle

// TODO
class GasolineVehicle : public Vehicle {
   public:
   private:
};  // GasolineVehicle
}  // namespace driving
