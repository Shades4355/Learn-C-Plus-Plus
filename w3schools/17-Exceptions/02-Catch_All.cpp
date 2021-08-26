#include <iostream>
using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (...) { // you can use the "three dots" syntax (...)
                // inside the catch block, which will handle
                // any type of exception
    cout << "Access denied - You must be at least 18 years old.\n";
  }
  return 0;
}
