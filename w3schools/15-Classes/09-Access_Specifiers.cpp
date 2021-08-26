#include <iostream>
using namespace std;

// Base class
class Employee  {
  protected:  // Protected access specifier
    int salary; // can only be accessed by child classes
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;

  myObj.setSalary(50000);
  myObj.bonus = 15000;
  
  cout << "Salary: " << myObj.getSalary() << "\n"; // "Salary: 50000"
  cout << "Bonus: " << myObj.bonus << "\n"; // "Bonus: 15000"

  return 0;
}
