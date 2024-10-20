#pragma once

namespace driving {

class Engine {
   public:
    Engine(unsigned horsepower)
        : horsepower_{horsepower} {
    }
    void start() const;

   private:
    unsigned horsepower_;
};  // class Engine
}  // namespace driving
