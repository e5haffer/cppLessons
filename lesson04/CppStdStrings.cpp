// ...basically for arbitrary text I/O we want to use the library
// For printing or message passing charArray "strings" are okay

#include <iostream>
#include <string>

using namespace std;

int main(){
  string Greetings ("Hello std::string!");
  cout << Greetings << endl;

  // ...mixing string constructions
  // getline()
  cout << "Enter a line of text: " << endl;
  string FirstLine;
  getline(cin, FirstLine);

  cout << "Enter another: " << endl;
  string SecLine;
  getline(cin, SecLine);

  cout << "Result of concatenation: " << endl;
  // the + operator works on Cpp strings
  string Concat = FirstLine + " " + SecLine;
  cout << Concat << endl;

  cout << "Copy of concatenation: " << endl;
  string Copy;
  Copy = Concat;
  cout << Copy << endl;

  cout << "Length of concat string: " << Concat.length() << endl;

  return 0;
}
