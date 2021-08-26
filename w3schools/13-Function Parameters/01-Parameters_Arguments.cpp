#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << "\n";
}

int main() {
  myFunction("Liam");   // Liam
  myFunction("Jenny");  // Jenny
  myFunction("Anja");  // Anja
  return 0;
}
