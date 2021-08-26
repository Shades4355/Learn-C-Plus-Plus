#include <iostream>
using namespace std;

int myFunction1(int x) {
  return 5 + x;
}

int myFunction2(int x, int y) {
  return x + y;
}

int main() {
  cout << myFunction1(3);    // Outputs 8 (5 + 3)
  cout << myFunction2(5, 4)  // Outputs 9 (5 + 4)

  return 0;
}
