#include <iostream>
using namespace std;

// three global variables
int FirstNumber = 0;
int SecondNumber = 0;
int MultiplicationResult = 0;

// custom function with no return
void MultiplyNumbers(){
  //develop three local variables
  cout << "Enter the first number: ";
  cin >> FirstNumber;

  cout << "Enter the second number: ";
  cin >> SecondNumber;

  MultiplicationResult = FirstNumber * SecondNumber;
 
  // Display ouputs
  cout << "Displaying from MultiplyingNumbers(): ";
  cout << FirstNumber << " x " << SecondNumber;
  cout << " = " << MultiplicationResult << endl;
}

int main(){
  cout << "This program will help you multiply two numbers" << endl;

  // call multiplication procedure
  MultiplyNumbers();

  cout << "Displaying local value from main()'s broader scope: " << endl;

  // This line will now compile and work
  cout << FirstNumber << "x" << SecondNumber;
  cout << " = " << MultiplicationResult << endl;

  return 0;
}

