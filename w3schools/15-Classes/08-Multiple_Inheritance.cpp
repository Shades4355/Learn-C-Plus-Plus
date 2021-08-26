#include <iostream>
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.";
    }
};

// Another base class
class MyOtherClass {
  public:
    vodid myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {

};

int main() {
  MyChildClass myObj;
  myObj.myFunction(); // "Some content in parent class."
  myObj.myOtherFunction(); // "Some content in another class."

  return 0
}
