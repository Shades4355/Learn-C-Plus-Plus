#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";  // Variable declaration
  string* pointer = &food;    // Pointer declaration

  // Reference: Output the memory address of food with the pointer (0x6dfed4 or similar)
  cout << pointer << "\n";

  // Dereference: Output the value of food with the pointer (Pizza)
  cout << *pointer << "\n";
  return 0;
}
