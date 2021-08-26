#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  private:
    string rev = "VROOM!";
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
    void revEngine() {
      cout << rev;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model + "\n";
  myCar.revEngine();

  return 0;
}
