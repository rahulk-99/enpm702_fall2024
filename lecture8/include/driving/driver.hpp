#pragma once

#include <iostream>
#include <string>

#include "date.hpp"

namespace driving {

class Driver {
   public:
    Driver(const std::string& name, driving::Date dob)
        : name_{name}, date_of_birth_{dob} {
    }
    void drive_vehicle() const;

    void print_date_of_birth() {
        date_of_birth_.print_date();
    }

    const std::string& get_name() const {
        return name_;
    }

   private:
    std::string name_;
    driving::Date date_of_birth_;
};  // class Driver
}  // namespace driving
