#pragma once
#include<iostream>

class Base {
   public:
    Base(int base_value = 50) : base_{base_value} {
        std::cout << "base_att_: " << base_ << '\n';
    }

   private:
    int base_;
};  // class Base