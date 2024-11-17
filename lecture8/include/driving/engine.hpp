#pragma once

namespace driving {

class Engine {
   public:
    Engine(unsigned int horsepower) : horsepower_{horsepower} {
        /*body*/
    }
    void start() const;

   private:
    unsigned int horsepower_;
};  // class Engine
}  // namespace driving
