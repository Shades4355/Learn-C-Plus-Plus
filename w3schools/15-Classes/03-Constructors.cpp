#include <iostream>
using namespace std;

class MyClass {     // The class
  public:           // Access specifier
  //A constructor in C++ is a special method that is automatically
  // called when an object of a class is created.
  // To create a constructor, use the same name as the class,
  // followed by parentheses ():
    MyClass() {     // Constructor
      cout << "Hello World!\n";
    }
};

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)

  Car navi("BMW", "X5", 1999);
  Car usagi("Ford", "Mustang", 1969);

  // Print values
  cout << navi.brand << " " << navi.model << " " << navi.year << "\n";
  cout << usagi.brand << " " << usagi.model << " " << usagi.year << "\n";

  return 0;
}
