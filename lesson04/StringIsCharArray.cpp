#include <iostream>
using namespace std;

// the strin terminating ASCII character is \0
int main(){
  char SayHello[] = {'H','e','l','l','o',' ','W','o','r','l','d','!','\0'};
  cout << SayHello << endl;
  cout << "Size of array: " << sizeof(SayHello) << endl;

  cout << "Replacing space with null" << endl;

  // this is going to mess stuff up
  SayHello[5] = '\0';
  cout << SayHello << endl;
  cout << "Size of array: " << sizeof(SayHello) << endl;

  return 0;
}
