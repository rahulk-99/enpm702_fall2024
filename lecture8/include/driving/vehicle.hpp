#pragma once

#include <iostream>
#include <memory>

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

// TODO
class ElectricVehicle : public Vehicle {
   public:
    void charge_battery();
    void drive(double distance);
    ElectricVehicle(const std::string& model, const std::string& color, int horsepower, double battery_capacity, double consumption_rate)
        : Vehicle(model, color, horsepower), battery_capacity_{battery_capacity}, battery_consumption_rate_{consumption_rate} {
    }

   private:
    double battery_capacity_; // percentage
    double battery_consumption_rate_;  // battery consumption rate per mile
};  // ElectricVehicle

// TODO
class GasolineVehicle : public Vehicle {
   public:
   private:
};  // GasolineVehicle
}  // namespace driving
