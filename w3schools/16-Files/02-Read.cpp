#include <iostream>
#include <ifstream>
using namespace std;

int main() {
  // Create a text string, which is used to output the text file
  string myText;

  // Read from text file
  ifstream MyReadFile("myFile.txt");

  // use a while loop together with the getline() function to read the file line by line
  while (getline(MyReadFile, myText)) {
    // Output the text from the file
    cout << myText;
  }

  // Close the file
  MyReadFile.close()

  return 0;
}
