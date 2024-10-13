#pragma once
#include <cstddef>  // for offsetof
#include <string>

namespace university {
struct Date {
    unsigned short day_;
    unsigned short month_;
    unsigned short year_;
};  // struct Date

class Person {
   public:
    Person() {}
    Person(const std::string& name, const std::string& email, const std::string& phone, unsigned short day, unsigned short month, unsigned short year) : name_{name}, email_{email}, phone_{phone}, date_of_birth_{day, month, year} {
    }

    std::string get_name() const { return name_; }

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
    Date date_of_birth_;
};  // class Person
}  // namespace university