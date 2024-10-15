#pragma once

/**
 * @file person.hpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2024-10-14
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <cstddef>  // for offsetof
#include <iostream>
#include <memory>
#include <string>

namespace university {
struct Date {
    unsigned short day_;
    unsigned short month_;
    unsigned short year_;
    Date(unsigned short day,
         unsigned short month,
         unsigned short year) {
        day_ = day;
        month_ = month;
        year_ = year;
    }

    bool is_valid const(){}
    bool is_leap_year const(){}
};  // struct Date

class Person {
   public:
    Person() {}
    Person(const std::string& name, const std::string& email, const std::string& phone, unsigned short day, unsigned short month, unsigned short year) : name_{name}, email_{email}, phone_{phone}, date_of_birth_{std::make_unique<Date>(day, month, year)} {
    }
    //---------- Mutators
    //---------- Accessors
    std::string get_name() const { return name_; }
    //---------- Utility
    void get_attribute_offsets() const {
        std::cout << "Offset of 'name_': " << offsetof(Person, name_) << '\n';
        std::cout << "Offset of 'email_': " << offsetof(Person, email_) << '\n';
        std::cout << "Offset of 'phone_': " << offsetof(Person, phone_) << '\n';
        std::cout << "Offset of 'date_of_birth_': " << offsetof(Person, date_of_birth_) << '\n';
    }

   private:
    std::string name_;
    std::string email_;
    std::string phone_;
    std::unique_ptr<Date> date_of_birth_;
};  // class Person
}  // namespace university