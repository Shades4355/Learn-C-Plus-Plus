#include <iostream>
using namespace std;


// public - members are accessible from outside the class

// private - members cannot be accessed (or viewed)
//   from outside the class

// protected - members cannot be accessed from outside the class,
//   however, they can be accessed in inherited classes. You will
//   learn more about Inheritance later.


class MyPublicClass {
  public:         // Public access specifier
    int x;        // Public attribute (int variable)
};

int main() {
  MyPublicClass myPublicObj;  // Create an object of MyClass

  // Access attributes and set values
  myPublicObj.x = 15;

  // Print values
  cout << myPublicObj.x;

  return 0;
}
