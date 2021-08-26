#include <iostream>
using namespace std;

// Parent class
class Parent {
  public:
    void myFunction() {
      cout << "Some content in parent class."
    }
};

//Child class
class Child: public Parent {

};

// Grandchild class
class Grandchild: public Child {

};

int main() {
  Grandchild myGrandchild;
  myGrandchild.myFunction(); // "Some content in parent class."

  return 0
}
