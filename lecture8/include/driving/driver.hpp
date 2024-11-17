#pragma once

#include <iostream>
#include <string>
#include <memory>
#include "date.hpp"

namespace driving {
class Date;
class Vehicle;

class Driver {
   public:
    Driver(const std::string& name, driving::Date dob) : name_{name}, date_of_brith_{dob} {
        /*body*/
    }
    void drive_vehicle(double distance) const;

    driving::Date get_birthdate() const {
        return date_of_brith_;
    }

    std::string get_name() const {
        return name_;
    }
    
   private:
    std::string name_;
    driving::Date date_of_brith_;
};  // class Driver
}  // namespace driving
