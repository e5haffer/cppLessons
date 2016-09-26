#include <iostream>

// A new library and associated namespace
#include <string>

using namespace std;

int main(){
  int InputNumber;
  // truncated name after 'using' statement
  cout << "Enter an integer: ";
  cin >> InputNumber;
  cout << "Enter your name: ";

  // declare a 'string' variable
  string InputName;
  cin >> InputName;
  cout << InputName << " entered " << InputNumber << endl;

  return 0;
}
