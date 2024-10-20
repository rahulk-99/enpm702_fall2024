#include<iostream>

class Base {
   public:
    Base(int value = 50)
        : base_{value} {
        std::cout << base_ << '\n';
    }

   private:
    int base_;
};  // class Base