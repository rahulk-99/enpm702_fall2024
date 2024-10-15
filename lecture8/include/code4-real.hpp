#pragma once
#include<iostream>

class Base {
   public:
    Base(int base_value = 50) : base_att_{base_value} {
        std::cout << "base_att_: " << base_att_ << '\n';
    }

   private:
    int base_att_;
};  // class Base