#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* pointer = &food;

  // Output the value of food (Pizza)
  cout << food << "\n";

  // Output the memory address of food (0x6dfed4)
  cout << &food << "\n";

  // Access the memory address of food and output its value (Pizza)
  cout << *pointer << "\n";

  // Change the value of the pointer
  *pointer = "Hamburger";

  // Output the new value of the pointer (Hamburger)
  cout << *pointer << "\n";

  // Output the new value of the food variable (Hamburger)
  cout << food << "\n";
}
