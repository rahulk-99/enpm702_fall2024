#include <iostream>

class Car {
   public:
    // Sports car
    static Car create_sports_car() {
        Car car;             // Compiler-provided default ctor
        car.set_speed(200);  // Assume set_speed is a method
        return car;
    }
    // Regular car
    static Car create_regular_car() {
        Car car;             // Compiler-provided default ctor
        car.set_speed(100);  // Assume set_speed is a method
        return car;
    }

    void set_speed(int speed) { this->speed_ = speed; }
    void drive() {
        std::cout << "Vroom vroom at speed " << speed_ << '\n';
    }

   private:
    int speed_;
};