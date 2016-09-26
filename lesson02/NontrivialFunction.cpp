#include <iostream>
using namespace std;

// FUNCTION DECLARATION
// () indicates a function but no form is given
int DemoConsoleOutput();

// main() as usual
int main(){
  // Call a custom function
  DemoConsoleOutput();
  
  return 0;
}

// FUNCTION DEFINITION
/* this isn't redundant because things used in main()
   need to be declared PRIOR to being called by main()
   we are allowed to fill in the details AFTER
*/
int DemoConsoleOutput(){
  cout << "This is a simple string literal" << endl;
  cout << "Writing number five: " << 5 << endl;
  cout << "Performing division 10/5 = " << 10/5 <<endl;
  cout << "Pi when approximated is 22/7 = " << 22/7 << endl;
  cout << "Pi when more accurately approximated is 22.0/7 = " << 22.0/7 << endl;

  return 0;
}
