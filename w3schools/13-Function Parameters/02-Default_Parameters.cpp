#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden"); // Sweden
  myFunction("India");  // India
  myFunction();         // Norway
  myFunction("USA");    // USA
  return 0;
}
