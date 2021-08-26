#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);   // Liam Refsnes. 3 years old.
  myFunction("Jenny", 14); // Jenny Refsnes. 14 years old.
  myFunction("Anja", 30);  // Anja Refsnes. 30 years old.
  return 0;
}
