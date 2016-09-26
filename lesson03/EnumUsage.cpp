#include <iostream>
using namespace std;

// global Enumerated Constant variable
enum CardinalDirections{
  North = 0,
  South,
  East,
  West
};

int main(){
  cout << "Displaying directions and their symbolic values" << endl;
  cout << "West: " << West << endl;
  cout << "North: " << North << endl;
  cout << "South: " << South << endl;
  cout << "East: " << East << endl;
return 0;
}
