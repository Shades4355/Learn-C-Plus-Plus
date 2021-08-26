#include <iostream>
using namespace std;

void swapNumbers(int &x, iny &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap:\n";
  cout << firstNum << secondNum << "\n";

  swapNumbers(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
