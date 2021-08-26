#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza"; // food variable
  string &meal = food; // reference to food

  cout << food << "\n"; // Outputs Pizza
  cout << meal << "\n"; // Outputs Pizza

  food = "Hamburger";
  cout << meal << "\n"; // Outputs Hamburger

  return 0;
}
