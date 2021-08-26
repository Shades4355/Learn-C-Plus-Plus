#include <iostream>
#include <string>
using namespace std;

int main() {
  // Initialize array
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

  cout << cars[0]; // "Volvo"

  // Change array
  cars[0] = "Opel";
  cout << cars[0]; // "Opel"

  return 0;
}
